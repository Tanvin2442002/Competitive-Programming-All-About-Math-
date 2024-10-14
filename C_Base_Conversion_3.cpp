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

int32_t main() {
  fastio;
  in;
  out;
  int t = 1;
  // cin >> t;
  while (t--) {
    int n;
    cin >> n;
    string tmp = to_string(n);
    int k = tmp.size();
    string s;
    cin >> s;
    int val = 0;
    int ans = 0;
    int i = s.size() - 1;
    int pw = 1;
    while (i >= 0) {
      string res = "";
      for (int j = i; j > i - k and j >= 0; j--) {  //   9  9  9    res-> 99 -> 9  99 /100  10100
        res += s[j];
      }
      reverse(res.begin(), res.end());
      int x = stoll(res);
      // cerr << x << endl;
      if (x < n) {
        ans += x * pw;
        // cerr << "ans " << ans << endl;
        pw *= n;
      } else {
        reverse(res.begin(), res.end());
        res.pop_back();
        reverse(res.begin(), res.end());
        x = stoll(res);
        ans += x * pw;
        // cerr << "X: " << x << endl;
        pw *= n;
      }
      if (x == 0) {
        i--;
      } else {
        i -= (int)log10(x) + 1;
      }
    }
    cout << ans << endl;
  }
  return 0;
}