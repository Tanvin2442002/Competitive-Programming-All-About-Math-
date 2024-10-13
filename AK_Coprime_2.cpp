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
        vector<int> position(1001, -1);
        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            position[x] = i;
        }
        int mx = -1;
        for (int i = 1; i <= 1000; i++)
        {
            for (int j = i; j <= 1000; j++)
            {
                if (position[i] != -1 && position[j] != -1)
                {
                    if (__gcd(i, j) == 1)
                    {
                        mx = max(mx, position[i] + position[j]);
                    }
                }
            }
        }
        cout << mx << endl;
    }
    return 0;
}