#pragma GCC optimize("O3")
#include <bits/stdc++.h>

using namespace std;

#define float long double
#define vf(v) (v).begin(), (v).end()
#define vr(v) (v).rbegin(), (v).rend()
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false)
#define in cin.tie(NULL)
#define out cout.tie(NULL)

const int N = 1e7 + 3;
vector<int> spf(N);   
bool isPrime[N]; 
vector<int> primes;

void sieve()
{

    for (int i = 2; i < N; ++i)
    {
        spf[i] = i;
        isPrime[i] = true;
    }
    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i * i < N; ++i)
    {
        if (isPrime[i])
        {
            for (int j = i * i; j < N; j += i)
            {
                if (spf[j] == j)
                {
                    spf[j] = i;
                }
                isPrime[j] = false;
            }
        }
    }

    for (int i = 2; i < N; ++i)
    {
        if (isPrime[i])
        {
            primes.push_back(i);
        }
    }
}

int32_t main()
{
    fastio;
    in;
    out;
    sieve();
    vector<int>psum;
    partial_sum(vf(spf),psum.begin()+);
    int t;
    cin >> t;
    while (t--)
    {
       int n;
       cin>>n;
       int spff = psum[n]*n;
       cout<<spff<<endl;

    }

    return 0;
}
