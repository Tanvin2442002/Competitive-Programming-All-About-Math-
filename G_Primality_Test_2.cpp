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
 //#include <ext/pb_ds/assoc_container.hpp>


int mod  = 1000000007;
int inf  = 1e18;

int prime(int n)
{
    if(n%2==0)return 2;
    for(int i=3;i*i<=n;i+=2)
    {
        if(n%i==0)return i;
    }
    return n;
}

int32_t main()
{
    fastio;in;out;
    int t = 1;
    //cin >> t;
    int n;
    while(cin>>n){
        vector<int>v;
        int k=n;
       while(n>1)
       {
            int fact=prime(n);
            v.push_back(fact);
            n/=fact;
       }
        map<int,int>mp;
        for(int i=0;i<v.size();i++)
        {
            mp[v[i]]++;
        }
        for(auto x:mp)
        {
            cout<<x.first<<"^"<<x.second<<" ";
        }
        cout<<endl;
    }
    return 0;
}