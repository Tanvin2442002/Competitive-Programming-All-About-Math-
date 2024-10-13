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
        int a, b;
        cin >> a >> b;
        int p = a * b;
        int cnt = 0;
        for (int i = 1; i * i <= p; i++)
        {
            if (p % i == 0)
            {
                if (__gcd(i, p / i) == a)
                {
                    cnt++;
                }
            }
        }
        cout << cnt * 2 << endl;
    }
    return 0;
}