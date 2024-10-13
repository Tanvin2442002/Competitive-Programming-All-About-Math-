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
        map<int, bool> mp;
        for (int i = 1; i <= n; i++)
        {
            mp[i] = true;
        }
        int tmp = mp.begin()->first;
        for (int i = 1; i <= n; i++)
        {
            cout << tmp << " ";
            mp.erase(tmp);
            tmp = tmp * 2;
            if (tmp > n)
            {
                tmp = mp.begin()->first;
            }
        }
        cout << endl;
    }
    return 0;
}