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
    int cs = 1;
    while (t--)
    {
        int a, b, l;
        cin >> a >> b >> l;
        int d = a * b / __gcd(a, b);
        int res = l / __gcd(l, d);
        if (l % d != 0)
        {
            cout << "Case " << cs++ << ": " << "impossible" << endl;
            continue;
        }
        vector<int> v;
        for (int i = 2; i * i <= res; i++)
        {
            if (res % i == 0)
            {
                v.push_back(i);
                while (res % i == 0)
                {
                    res /= i;
                }
            }
        }
        if (res > 1)
        {
            v.push_back(res);
        }
        res = l / d;
        for (auto i : v)
        {
            while (l % (res * i) == 0)
            {
                res *= i;
            }
        }
        cout << "Case " << cs++ << ": " << res << endl;
    }
    return 0;
}