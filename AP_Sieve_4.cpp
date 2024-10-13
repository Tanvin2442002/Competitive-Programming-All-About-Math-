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

const int N = 1e5 + 3;
int prime[N];

void seive()
{
    for (int i = 2; i <= N; i++)
    {
        prime[i] = 1;
    }
    prime[0] = prime[1] = 0;
    for (int i = 2; i * i <= N; i++)
    {
        if (prime[i])
        {
            for (int j = i * i; j <= N; j += i)
            {
                prime[j] = 0;
            }
        }
    }
}

int32_t main()
{
    fastio;
    in;
    out;
    int t = 1;
    // cin >> t;
    seive();
    while (t--)
    {
        int n;
        cin >> n;
        if (n < 3)
        {
            cout << "1" << endl;
        }
        else
        {
            cout << "2" << endl;
        }
        for (int i = 2; i <= n + 1; i++)
        {
            if (prime[i])
            {
                cout << "1 ";
            }
            else
            {
                cout << "2 ";
            }
        }
    }
    return 0;
}