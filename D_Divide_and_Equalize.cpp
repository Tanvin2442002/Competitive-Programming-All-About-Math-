/*

30 = 2 * 3 * 5
50 = 2 * 5 * 3  /5
27 = 3 * 3 * 5   /3  *5
20 = 2 * 2 * 5

*/

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

int factor(int n)
{
    int a;
    if (n % 2 == 0)
        return 2;
    for (a = 3; a <= sqrt(n); a += 2)
    {
        if (n % a == 0)
            return a;
    }
    return n;
} // complete factorization

int32_t
main()
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
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            int r;
            while (x > 1)
            {
                r = factor(x);
                mp[r]++;
                x /= r;
            }
        }
        int f = 0;
        for (auto i : mp)
        {
            if (i.second % n != 0)
            {
                f = 1;
                cout << "NO" << endl;
                break;
            }
        }
        if (f == 0)
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}