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

int32_t main()
{
    fastio;in;out;
    int t = 1;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        vector<char>v(n);
        set<char>s;
        for(int i=0;i<n;i++){
            cin>>v[i];
            s.insert(v[i]);
        }
        vector<char>first;
        vector<char>rev;
        for(auto i:s){
            first.push_back(i);
        }
        for(int i=first.size()-1;i>=0;i--){
            rev.push_back(first[i]);
        }
        string ans;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<first.size();j++){
                if(v[i]==first[j]){
                    ans.push_back(rev[j]);
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}