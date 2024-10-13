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
        int l, r, x, y;
        cin >> l >> r >> x >> y;
        int ans = 0;
        if (y % x != 0)
        {
            cout << 0 << endl;
            continue;
        }
        int n = y / x;
        // cerr << n << endl;
        for (int i = 1; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                // cerr << i << " " << n / i << endl;
                int a = i * x;
                int b = n / i * x;
                cerr << a << " " << b << endl;
                if (__gcd(a, b) == x and a >= l and a <= r and b >= l and b <= r)
                {
                    if (a != b)
                        ans += 2;
                    else
                        ans++;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}