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
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(vf(a));
        bool f = true;
        for (int i = 0; i < n; i++)
        {
            if (a[n - 1] % a[i] != 0)
            {
                f = false;
            }
        }
        if (!f)
            cout << n << endl;
        else
        {
            int res = 0;
            int l = a[n - 1];
            set<int> div;
            for (int i = 1; i * i <= l; i++)
            {
                if (l % i == 0)
                {
                    div.insert(i);
                    div.insert(l / i);
                }
            }
            for (auto i : div)
            {
                int lcm = i;
                vector<int> b;
                bool flag = true;
                for (int j = 0; j < n; j++)
                {
                    if (lcm == a[j])
                        flag = false;
                    if (lcm % a[j] == 0)
                    {
                        b.push_back(a[j]);
                    }
                }
                int flcm = 1;
                for (int j = 0; j < b.size(); j++)
                {
                    flcm = (flcm * b[j]) / __gcd(flcm, b[j]);
                }
                int sz = b.size();
                if (flag and flcm == lcm)
                    res = max(res, sz);
            }
            cout << res << endl;
        }
    }
    return 0;
}