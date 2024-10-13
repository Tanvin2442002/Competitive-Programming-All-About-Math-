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
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        bool flag=true;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(vf(a));
        int small;
        int firstsmall = a[0];
        int secondsmall = a[1];
        for (int i = 2; i < n; i++)
        {
            if (a[i] % firstsmall != 0 and a[i] % secondsmall != 0)
            {
                flag = false;
                small=i;
                break;
            }
        }
        if (flag)
        {
            cout << "YES" << endl;
        }
        else
        {   
            bool flag2 = true;
            secondsmall=a[small];
            swap(a[1],a[small]);
            for (int i = 2; i < n; i++)
            {
                if (a[i] % firstsmall != 0 and a[i] % secondsmall != 0)
                {
                    flag2 = false;
                    break;
                }
            }
            if (flag2)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}