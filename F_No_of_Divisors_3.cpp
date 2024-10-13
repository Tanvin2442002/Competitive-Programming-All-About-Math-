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
    const int MAX_N = 1000;
    vector<int> cnt(MAX_N + 1, 0);
    for (int i = 1; i <= MAX_N; i++)
    {
        for (int j = i; j <= MAX_N; j += i)
        {
            cnt[j]++;
        }
    }
    vector<pair<int, int>> v;
    for (int i = 1; i <= MAX_N; i++)
    {
        v.push_back({cnt[i], i});
    }
    sort(v.begin(), v.end(), [](const pair<int, int> &a, const pair<int, int> &b)
         {
        if (a.first == b.first) {
            return a.second > b.second;
        }
        return a.first < b.first; });
    int cs = 0;
    while (t--)
    {
        int n;
        cin >> n;
        cout << "Case " << ++cs << ": " << v[n - 1].second << endl;
    }
    return 0;
}
