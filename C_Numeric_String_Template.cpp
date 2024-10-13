#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>

using namespace std;

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

bool matches(const vector<int> &a, const string &s)
{
    unordered_map<int, char> n_to_c;
    unordered_map<char, int> c_to_n;

    int n = a.size();
    for (int i = 0; i < n; ++i)
    {
        int n = a[i];
        char c = s[i];

        if (n_to_c.count(n) && n_to_c[n] != c)
        {
            return false;
        }
        if (c_to_n.count(c) && c_to_n[c] != n)
        {
            return false;
        }

        n_to_c[n] = c;
        c_to_n[c] = n;
    }

    return true;
}

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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        int m;
        cin >> m;
        for (int i = 0; i < m; i++)
        {
            string s;
            cin >> s;

            if (s.size() != n)
            {
                cout << "NO" << endl;
            }
            else
            {
                if (matches(v, s))
                {
                    cout << "YES" << endl;
                }
                else
                {
                    cout << "NO" << endl;
                }
            }
        }
    }
    return 0;
}
