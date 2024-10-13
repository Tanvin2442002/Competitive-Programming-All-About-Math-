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
//  #include <ext/pb_ds/assoc_container.hpp>

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
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int left[n + 1], right[n + 1];
        left[0] = 0;
        for (int i = 0; i < n; i++)
        {
            left[i + 1] = __gcd(left[i], v[i]);
        }
        right[n] = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            right[i] = __gcd(right[i + 1], v[i]);
        }
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            ans = max(ans, __gcd(left[i], right[i + 1]));
        }
        cout << ans << endl;
    }
    return 0;
}