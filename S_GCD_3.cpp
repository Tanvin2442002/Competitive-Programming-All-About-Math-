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
    //cin >> t;
    while(t--){
        int a,b,x,y;
        cin >> a >> b >> x >> y;
        int g = __gcd(x,y);
        x /= g;
        y /= g;
        int mn=min(a/x,b/y);
        cout<<mn*x<<" "<<mn*y<<endl;
    }
    return 0;
}