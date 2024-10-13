#pragma GCC optimize("O3")
#include <bits/stdc++.h>

using namespace std;

// #define int   long long
#define float long double
#define vf(v) (v).begin(), (v).end()
#define vr(v) (v).rbegin(), (v).rend()
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false)
#define in cin.tie(NULL)
#define out cout.tie(NULL)
// #include <ext/pb_ds/assoc_container.hpp>

const int N = 1e8 + 3;
bitset<N> isPrime;
vector<int> primes;

int32_t main()
{
    fastio;
    in;
    out;
    isPrime.set();
    isPrime[0] = isPrime[1] = 0;
    for (int i = 2; i * i <= N; i++)
    {
        if (isPrime[i])
        {
            for (int j = i * i; j < N; j += i)
            {
                isPrime[j] = 0;
            }
        }
    }
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        
    }
    return 0;
}
