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
    int t;
    cin >> t;
    int N=1e6+10;
    vector<int> cnt(N,0);
    for(int i=1;i<N;i++){
        for(int j=i;j<N;j+=i){
            cnt[j]++;
        }
    }
    while (t--)
    {
        int n;
        cin >> n;
        cout<<cnt[n]<<endl;
    }
    return 0;
}