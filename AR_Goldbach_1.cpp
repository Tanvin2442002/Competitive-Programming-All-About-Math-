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



int32_t main()
{
    fastio;
    in;
    out;
//    sieve();

    int t=1;
    // cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        bool flag = true;
        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                flag = false;
            }
        }
        if (flag)
            cout << 1 << endl;
        else if (n % 2 == 0)
            cout << 2 << endl;
        else
        {
            flag = true;
            n-=2;
            for (int i = 2; i * i <= n; i++)
            {
                if (n % i == 0)
                {
                    flag = false;
                }
            }
            if(flag)
                cout<<2<<endl;
            else
                cout<<3<<endl;
        }
    }

    return 0;
}
