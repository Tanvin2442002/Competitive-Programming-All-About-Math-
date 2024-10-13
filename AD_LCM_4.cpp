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
    // cin >> t;
    while (t--)
    {
        int a;
        cin >> a;
        int ans = inf;
        for (int i = 1; i * i <= a; i++)
        {
            if (a % i == 0)
            {
                int x = i;
                int y = a / i;
                if (x * y / __gcd(x, y) == a)
                {
                    ans = min(ans, y);
                }
            }
        }
        cout << a/ans <<" "<< ans << endl;
    }
    return 0;
}