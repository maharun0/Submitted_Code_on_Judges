#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define suii ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    suii
    int t, tc = 1;
    ll s;
    cin >> t;
    while (t--){
        cout << "Case " << tc++ << ": ";
        cin >> s;

        // Calculate high and low
        ll ceill = ceil(sqrt(s));
        ll high = ceill * ceill;
        ll low = (ceill - 1) * (ceill - 1) + 1;

        // Calculate mid
        ll mid = (high + low) / 2;
        ll x = sqrt(high), y;
        y = x;

        // Calculate difference
        ll dif = abs(mid - s);

        // Calculate x and y position
        if (high & 1){// odd
            if (s < mid){
                y -= dif;
            } else {
                x -= dif;
            }
        } else {
            if (s < mid){
                x -= dif;
            } else {
                y -= dif;
            }
        }

        cout << x << " " << y << endl;
    }
    return 0;
}