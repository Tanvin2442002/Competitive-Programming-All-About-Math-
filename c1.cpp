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
    int n = 10, i = 0;
    while(i < n) {
        switch (i )
        {
        case 0:
            if(true) {
                break;
            }
            cout << "not break loop\n";
            break;
        default:
            cout << "others " << i << "\n";
            break;
        }
        i++;
    }
}