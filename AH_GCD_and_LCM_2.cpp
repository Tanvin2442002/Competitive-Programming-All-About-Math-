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
        vector<int> b(n + 1);
        b[0] = a[0], b[n] = a[n - 1];
        for (int i = 1; i < n; i++)
        {
            b[i] = (a[i - 1] * a[i]) / __gcd(a[i - 1], a[i]);
        }
        bool f = true;
        for (int i = 0; i < n; i++)
        {
            if (a[i] != __gcd(b[i], b[i + 1]))
            {
                f = false;
            }
        }
        if (!f)
            cout << "NO" << endl;
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}