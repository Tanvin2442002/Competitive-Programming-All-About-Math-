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
    int cs=1;
    while(t--){
        int a,b,x,y;
        cin >> a >> b >> x >> y;
        int ans=__gcd(abs(a-x),abs(b-y));
        cout<<"Case "<<cs++<<": "<<ans+1<<endl;
    }
    return 0;
}