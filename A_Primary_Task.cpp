#pragma GCC optimize("O3")
#include<bits/stdc++.h>

using namespace std;

// #define int   long long
#define float long double
#define vf(v) (v).begin(), (v).end()
#define vr(v) (v).rbegin(), (v).rend()
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false)
#define in  cin.tie(NULL) 
#define out cout.tie(NULL)
//  #include <ext/pb_ds/assoc_container.hpp>


int mod  = 1000000007;
int inf  = 1e18;

int32_t main()
{
    fastio;in;out;
    int t = 1;
    cin >> t;
    vector<string>v;
    string s="";
    for(int i=2;i<=99;i++)
    {   
        s="";
        s+="10";
        s+=to_string(i);
        v.push_back(s);
        
    }
    // for(auto i:v)
    // {
    //     cout<<i<<endl;
    // }
    while(t--){
        int n;
        cin>>n;
        string s = to_string(n);
        if(find(v.begin(),v.end(),s)!=v.end())
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}