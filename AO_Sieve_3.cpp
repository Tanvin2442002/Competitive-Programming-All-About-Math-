#pragma GCC optimize("O3")
#include <bits/stdc++.h>

using namespace std;

//#define int   long long
#define float long double
#define vf(v) (v).begin(), (v).end()
#define vr(v) (v).rbegin(), (v).rend()
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false)
#define in  cin.tie(NULL) 
#define out cout.tie(NULL)
// #include <ext/pb_ds/assoc_container.hpp>

const int N = 1e7 + 3;
int isPrime[N];
vector<int> primes;

int32_t main() {
    fastio; in; out;
    for(int i=2;i<N;i++)
    {
        isPrime[i]=i;
    }
    isPrime[0] = isPrime[1] = 0;

    for (int i = 2; i * i <= N; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j < N; j += i) {
                if(isPrime[j]==j)
                {
                    isPrime[j]=i;
                }
            }
        }
    }
    int t = 1;
    // cin >> t;
    int n;
    while (cin>>n){
        while(n>1)
        {
            cout<<isPrime[n]<<" x ";
            n/=isPrime[n];
        }
        cout<<endl;
    }
    return 0;
}
