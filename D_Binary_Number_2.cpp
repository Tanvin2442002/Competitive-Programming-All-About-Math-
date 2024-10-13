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

int32_t main()
{
    fastio;
    in;
    out;
    int t = 1;
    cin >> t;
    int cs = 1;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr;
        int temp = n;
        while (temp)
        {
            arr.push_back(temp % 2);
            temp /= 2;
        }
        arr.push_back(0);
        reverse(vf(arr));
        cout << "Case " << cs++ << ": ";
        if (next_permutation(vf(arr)))
        {
            int ans = 0;
            int power = 1;
            while (arr.size())
            {
                ans += arr.back() * power;
                power *= 2;
                arr.pop_back();
            }
            cout << ans << endl;
        }
        else
        {
            // arr.insert(arr.begin(), 0);
            if (next_permutation(vf(arr)))
            {
                int ans = 0;
                int power = 1;
                while (arr.size())
                {
                    ans += arr.back() * power;
                    power *= 2;
                    arr.pop_back();
                }
                cout << ans << endl;
            }
        }
    }
    return 0;
}