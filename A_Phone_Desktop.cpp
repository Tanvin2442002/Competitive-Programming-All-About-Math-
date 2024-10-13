#pragma GCC optimize("O3")
#include <bits/stdc++.h>

using namespace std;

#define int long long
#define float long double
#define vf(v) (v).begin(), (v).end()
#define vr(v) (v).rbegin(), (v).rend()
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false)
#define in cin.tie(NULL)
#define out cout.tie(NULL)
// #include <ext/pb_ds/assoc_container.hpp>

int mod = 1000000007;
int inf = 1e18;

int32_t main()
{
    fastio;
    in;
    out;
    int t = 1;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        int cnt = 0;
        while (1)
        {
            if (y >= 2)
            {
                y = y - 2;
                if (x > 0)
                {
                    x = x - 7;
                }
                cnt++;
            }
            else if (y < 2 and y > 0)
            {
                y = y - 1;
                if (x > 0)
                {
                    x = x - 11;
                }
                cnt++;
            }
            else if (y <= 0)
            {
                if (x > 0)
                {
                    x = x - 15;
                    cnt++;
                }
                if (x <= 0 and y <= 0)
                    break;
            }
            else
            {
                break;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}