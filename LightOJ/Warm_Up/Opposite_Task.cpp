#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define suii ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const ll M = 10000007;

ll a, b, c, d, e, f, n; 

ll fn(ll n){
    if (n == 0) return a;
    if (n == 1) return b;
    if (n == 2) return c;
    if (n == 3) return d;
    if (n == 4) return e;
    if (n == 5) return f;
    return fn(n-1) % M + fn(n-2) % M + fn(n-3) % M + fn(n-4) % M + fn(n-5 % M) + fn(n-6) % M;
}

int main()
{
    suii
    int t, tc = 1;
    cin >> t;
    while (t--){
        cout << "Case " << tc++ << ": ";
        cin >> a >> b >> c >> d >> e >> f >> n;
        cout << fn(n) % M << endl;
    }
    return 0;
}