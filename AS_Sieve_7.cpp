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
const int N = 1e7 + 3;

vector<int> prime(N);
vector<int> v[11];

void seive()
{
    for (int i = 2; i < N; i++)
    {
        if (!prime[i])
        {
            for (int j = i; j < N; j += i)
            {
                prime[j]++;
            }
        }
    }
    for (int i = 1; i < N; i++)
    {
        v[prime[i]].push_back(i);
    }
}

int32_t main()
{
    fastio;
    in;
    out;
    int t = 1;
    seive();
    cin >> t;
    while (t--)
    {
        int a, b, n;
        cin >> a >> b >> n;
        int ans = upper_bound(vf(v[n]),a-1)-v[n].begin();
        int res = upper_bound(vf(v[n]),b)-v[n].begin();
        cout << res-ans << endl;
    }
    return 0;
}