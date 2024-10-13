#pragma GCC optimize("O3")
#include<bits/stdc++.h>

using namespace std;

#define int   long long
#define float long double
#define vf(v) (v).begin(), (v).end()
#define vr(v) (v).rbegin(), (v).rend()
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false)
#define in  cin.tie(NULL) 
#define out cout.tie(NULL)
// #include <ext/pb_ds/assoc_container.hpp>


int mod  = 1000000007;
int inf  = 1e18;

int32_t main()
{
    fastio;in;out;
    int t = 1;
    cin >> t;
    int cs=0;
    while(t--){
        int p,l;
        cin>>p>>l;
        p-=l;
        vector<int>v;
        for(int i=1;i*i<=p;i++)
        {
            if(p%i==0)
            {
               if(i>l)v.push_back(i);
               if(i*i!=p && p/i>l)v.push_back(p/i);
            }

        }
        sort(v.begin(),v.end());
        if(v.size()==0)cout<<"Case "<<++cs<<": impossible"<<endl;
        else
        {
            cout<<"Case "<<++cs<<": ";
            for(int i=0;i<v.size();i++)
            {
                cout<<v[i];
                cout<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}