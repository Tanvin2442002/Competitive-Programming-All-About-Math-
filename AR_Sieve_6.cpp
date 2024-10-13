#pragma GCC optimize("O3")
#include <bits/stdc++.h>

using namespace std;

#define int long long
#define vf(v) (v).begin(), (v).end()
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false)
#define in cin.tie(NULL)
#define out cout.tie(NULL)

int mod = 1000000007;
int inf = 1e18;
const int N = 1e7 + 3;
vector<int> prime(N, 1); 
vector<int> afraidNums;  
void sieve()
{
    prime[0] = prime[1] = 0;
    for (int i = 2; i * i < N; i++)
    {
        if (prime[i])
        {
            for (int j = i * i; j < N; j += i)
            {
                prime[j] = 0;
            }
        }
    }
}

void afraidnumber()
{
    for (int y = 1; y * y * y * y < N; y++)
    {
        int y4 = y * y * y * y;
        for (int x = 1; x * x + y4 < N; x++)
        {
            int num = x * x + y4;
            if (prime[num])
            {
                afraidNums.push_back(num);
                prime[num] = 0;
            }
        }
    }
    sort(vf(afraidNums));
}

int32_t main()
{
    fastio;
    in;
    out;
    sieve();
    afraidnumber();

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int ans = upper_bound(vf(afraidNums), n) - afraidNums.begin();
        cout << ans << endl;
    }

    return 0;
}
