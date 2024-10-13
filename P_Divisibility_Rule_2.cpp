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


bool isPalindrome(int num)
{
    string s = to_string(num);
    int len = s.length();
    for (int i = 0; i < len / 2; ++i)
    {
        if (s[i] != s[len - 1 - i])
            return false;
    }
    return true;
}

int32_t main()
{
    fastio;
    in;
    out;
    int n;
    cin >> n;

    for (int i = 11; i <= n; i += 11)
    {
        if (isPalindrome(i) && n % i == 0)
        {
            cout << i << endl;
            break;
        }
    }

    return 0;
}
