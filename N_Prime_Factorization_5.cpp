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
    int cs = 0;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v;
        v.push_back(1);
        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                int size = v.size();
                while (n % i == 0)
                {
                    int size2=v.size();
                    for (int j = size2-1; j >= size2-size; j--)
                    {
                        v.push_back(v[j] * i);
                    }
                    n /= i;
                }
            }
        }
        if(n>1)
        {
            int size = v.size();
            for (int j = size-1; j >= 0; j--)
            {
                v.push_back(v[j] * n);
            }
        }
        cout<<"Case "<<++cs<<":"<<endl;
        for(int i=0;i<v.size();i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}