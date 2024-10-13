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
const int N = 1e7 + 3;

vector<int> spf(N);
int cnt1[N];
int cnt2[N];
void sieve()
{
    for (int i = 2; i < N; i++)
    {
        spf[i] = i;
    }
    for (int i = 2; i * i < N; i++)
    {
        if (spf[i] == i)
        {
            for (int j = i * i; j < N; j += i)
            {
                if (spf[j] == j)
                {
                    spf[j] = i;
                }
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
    sieve();
    // cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        vector<int> v(a);
        for (int i = 0; i < a; i++)
        {
            cin >> v[i];
            int tmp = v[i];
            while (tmp > 1)
            {
                cnt1[spf[tmp]]++;
                tmp /= spf[tmp];
            }
        }
        vector<int> arr(b);
        for (int i = 0; i < b; i++)
        {
            cin >> arr[i];
            int tmp = arr[i];
            while (tmp > 1)
            {
                cnt2[spf[tmp]]++;
                tmp /= spf[tmp];
            }
        }
        cout << a << " " << b << endl;
        for (int i = 0; i < a; i++)
        {
            int x = 1;
            for (int j = v[i]; j > 1; j /= spf[j])
            {
                if (cnt2[spf[j]] > 0)
                {
                    cnt2[spf[j]]--;
                }
                else
                {
                    x *= spf[j];
                }
            }
            cout << x << " ";
        }
        cout << endl;
        for (int i = 0; i < b; i++)
        {
            int x = 1;
            for (int j = arr[i]; j > 1; j /= spf[j])
            {
                if (cnt1[spf[j]] > 0)
                {
                    cnt1[spf[j]]--;
                }
                else
                {
                    x *= spf[j];
                }
            }
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}