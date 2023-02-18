#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define suii ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int main()
{
    suii
    int t, tc = 1, n;
    cin >> t;
    while (t--){
        cout << "Case " << tc++ << ": ";
        vector<ll> v(10008);
        ll sum = 0, x;
        for (int i = 0; i < 6; i++){
            cin >> x;
            x %= 10000007;
            v[i] = x;
            sum += x;
            sum %= 10000007;
        }
        cin >> n;
        sum %= 10000007;
        for (int i = 6; i <= n; i++){
            if (sum >= 0)
                v[i] = sum;
            else 
                v[i] = 10000007 + sum;

            sum -= v[i - 6];
            sum += v[i];

            sum %= 10000007;
        }

        cout << v[n] << endl;
    }
    return 0;
}