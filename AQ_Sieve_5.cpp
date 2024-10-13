
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
const int N = 1e6 + 3;
vector<int>prime(N);
void seive()
{
    for (int i = 2; i < N; i++)
    {
        prime[i] = 1;
    }
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
vector<int> afraidNums;
vector<int> nums[7];
void afraidnumber()
{
    nums[0].push_back(0);
    int pw = 1;
    for (int i = 1; i <= 6; i++)
    {
        for (auto x : nums[i - 1])
        {
            for (int j = 1; j <= 9; j++)
            {
                int num = j * pw + x;
                if (prime[num])
                {
                    nums[i].push_back(num);
                    afraidNums.push_back(num);
                }
            }
        }
        pw *= 10;
    }
    sort(vf(afraidNums));
}

int32_t main()
{
    fastio;
    in;
    out;
    int t = 1;
    seive();
    afraidnumber();
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
