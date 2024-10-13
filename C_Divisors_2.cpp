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
    //cin >> t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>st;
        for(int i=1;i*i<=n;i++){
            if(n%i==0){
                st.push_back(i);
                if(i!=n/i){
                    st.push_back(n/i);
                }
            }
        }
        sort(vf(st));
        if(k>st.size()){
            cout<<-1<<endl;
        }
        else{
            cout<<st[k-1]<<endl;
        }
    }
    return 0;
}