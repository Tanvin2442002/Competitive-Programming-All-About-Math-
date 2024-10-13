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
        vector<int> sorted = a;
        sort(vf(sorted));
        vector<int> notsorted = a;
        for (int i = 0; i < n; i++)
        {
            notsorted.push_back(a[i]);
        }
        bool yes = false;
        for (int i = 0; i < n; ++i)
        {
            bool match = true;
            for (int j = 0; j < n; ++j)
            {
                if (notsorted[i + j] != sorted[j])
                {
                    match = false;
                    break;
                }
            }
            if (match)
            {
                cout << "YES" << endl;
                yes = true;
                break;
            }
        }
        if (!yes)
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}