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
        int n, b;
        cin >> n >> b;
        int n1 = 0;
        int digit;
        vector<int>a,br;
        int pw = 1;
        for (int i = 0; i < n; i++)
        {
            cin >> digit;
            a.push_back(digit);
        }
        reverse(vf(a));
        for (int i = 0; i < n; i++)
        {
            n1 += a[i] * pw;
            pw *= b;
        }
        n, b;
        cin >> n >> b;
        int n2 = 0;
        int pw2 = 1;
        for (int i = 0; i < n; i++)
        {
            cin >> digit;
            br.push_back(digit);
        }
        reverse(vf(br));
        for (int i = 0; i < n; i++)
        {
            n2 += br[i] * pw2;
            pw2 *= b;
        }
        if (n1 > n2)
        {
            cout << ">" << endl;
        }
        else if (n1 < n2)
        {
            cout << "<" << endl;
        }
        else
        {
            cout << "=" << endl;
        }
    }
    return 0;
}