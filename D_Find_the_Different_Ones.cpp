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
//  #include <ext/pb_ds/assoc_container.hpp>


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
        vector<int>v(n+1);
        vector<int>idx;
        for(int i=1;i<n+1;i++){
            cin>>v[i];
        }
        idx.push_back(1);
        for(int i=1;i<n;i++)
        {
            if(v[i]!=v[i+1])
            {
                idx.push_back(i+1);
            }
        }
        int q;
        cin>>q;
        // for(int i=0;i<idx.size();i++)
        // {
        //     cerr<<idx[i]<<" ";
        // }
        // cerr<<endl;
        while(q--)
        {
            int l,r;
            cin>>l>>r;
            // l--,r--;
            int ans=upper_bound(vf(idx),l)-idx.begin();
            int ans2=lower_bound(vf(idx),l+1)-idx.begin();
            cerr<<ans<<endl;
            if(ans == idx.size() || idx[ans]>r){
                cout<<-1<<" "<<-1<<endl;
            }
            else{
                cout<<l<<" "<<idx[ans]<<endl;
            }
        }
        cout<<endl;
    }
    return 0;
}
 
// -1 2 -11 4 -1 5 -1 2

// -1 1 -10 -6 -7 -2 -3 -1