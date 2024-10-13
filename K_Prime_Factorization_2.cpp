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

bool prime(int num)
{
    if (num == 2)
        return true;
    if (num % 2 == 0)
        return false;
    for (int i = 3; i * i <= num; i += 2)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}

int nod(int num)
{
    set<int> factors;
    for (int i = 2; i * i <= num; ++i)
    {
        while (num % i == 0)
        {
            if (prime(i))
                factors.insert(i);
            num /= i;
        }
    }
    if (num > 1)
    {
        factors.insert(num);
    }
    return factors.size();
}

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
        int cnt = 0;
        for (int i = 2; i <= n; i++)
        {
            if (nod(i) == 2)
                cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}