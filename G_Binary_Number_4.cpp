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

int cntOnes(int n) {
  int cnt = 0;
  for(int i=1;i<=n;i<<=1) {
    int x = (n + 1) / (i << 1);
    cnt += x * i;
    if((n + 1) % i && n & i) cnt += (n + 1) % i;
  }
  return cnt;
}

int32_t main() {
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
  cout << cntOnes(b) - cntOnes(a - 1) << endl;
}