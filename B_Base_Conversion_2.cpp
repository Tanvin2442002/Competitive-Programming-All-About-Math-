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
        int n;
        cin >> n;
        int sum = 0;
        for (int i = 2; i < n; i++)
        {
            int tmp = n;
            while (tmp)
            {
                int rem = tmp % i;
                tmp /= i;
                sum += rem;
            }
        }
        int numerator = sum;
        int denominator = n - 2;
        int gcd = __gcd(numerator, denominator);
        cout << numerator / gcd << "/" << denominator / gcd << endl;
    }
    return 0;
}