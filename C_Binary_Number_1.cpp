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
        string s;
        cin >> s;
        string s1 = "0";
        s1 += s;
        int cnt = 0;
        while (s1 != "1" and s1 != "01")
        {
            if (s1.back() == '1')
            {
                int idx = s1.size()-1;
                // cerr << s1 << endl;
                while (s1[idx]!='0')
                {
                    idx--;
                }
                for (int i = idx;s1[i]; i++)
                {
                    if (s1[i] == '1')
                        s1[i] = '0';
                    else
                        s1[i] = '1';
                }
                cnt++;
            }
            cnt++;
            s1.pop_back();
        }
        cout << cnt << endl;
    }
    return 0;
}