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
        vector<int> a(n + 1);
        if (n & 1)
        {
            a[1] = 1;
            for (int i = 2; i < n + 1; i++)
            {
                if (i & 1)
                {
                    a[i] = i - 1;
                }
                else
                {
                    a[i] = i + 1;
                }
            }
        }
        else
        {
            for (int i = 1; i < n + 1; i++)
            {
                if (i & 1)
                {
                    a[i] = i + 1;
                }
                else
                {
                    a[i] = i - 1;
                }
            }
        }
        for (int i = 1; i <= n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}