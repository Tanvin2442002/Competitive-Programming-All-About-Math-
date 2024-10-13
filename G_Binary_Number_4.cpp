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

int countones(int n)
{
    int ans = 0;
    for (int i = 0; (1LL << i) <= n; i++)
    {
        int purahbe = (n + 1) / (1LL << (i + 1));
        ans += purahbe * (1LL << i);
        if((n + 1) % (1LL << i) and n&(1LL<<i))
        {
            ans += (n + 1) % (1LL << (i));
        }
    }
    return ans;
}

int32_t main()
{
    fastio;
    in;
    out;
    int a, b;
    cin >> a >> b;
    // cout<<countones(1000000)<<endl;
    // int ans = 0;
    // for(int i=0;i<=1000000;i++)
    // {
        // ans+= __builtin_popcountll(i);
    // }
    // cout<<ans<<endl;
    cout << countones(b) - countones(a - 1) << endl;
}