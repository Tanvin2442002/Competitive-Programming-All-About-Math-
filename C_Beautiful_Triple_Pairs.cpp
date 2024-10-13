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
//#include <ext/pb_ds/assoc_container.hpp>

int mod = 1000000007;
int inf = 1e18;

int32_t main()
{
    fastio;
    in;
    out;
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i];
        }
        // int n = arr.size();
        int count = 0;

        for (int i = 0; i < n - 2; ++i)
        {
            for (int j = i + 1; j < n - 2; ++j)
            {
                int diff = 0;
                if (arr[i] != arr[j])
                    ++diff;
                if (arr[i + 1] != arr[j + 1])
                    ++diff;
                if (arr[i + 2] != arr[j + 2])
                    ++diff;
                if (diff == 1)
                {
                    ++count;
                }
            }
        }
        cout<<count<<endl;
    }
    return 0;
}