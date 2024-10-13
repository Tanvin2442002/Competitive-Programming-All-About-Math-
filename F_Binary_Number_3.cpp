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
        string s;
        cin >> s;
        // reverse(vf(s));
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                cnt++;
            }
        }
        vector<int> ans;
        int k = 0;
        int res = 0;
        while (s.size())
        {
            char x = s.back();
            s.pop_back();
            if (x == '0')
            {
                res += k;
                ans.push_back(res);
            }
            else
                k++;
        }
        while (cnt--)
        {
            ans.push_back(-1);
        }
        for (auto i : ans)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}