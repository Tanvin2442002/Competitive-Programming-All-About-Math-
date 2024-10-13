#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int m, x;
        cin >> m >> x;
        
        vector<int> cost(m), happiness(m);
        for (int i = 0; i < m; i++) {
            cin >> cost[i] >> happiness[i];
        }
        
        // DP array: dp[j] means maximum happiness with j pounds available
        vector<int> dp(m * x + 1, 0);
        
        for (int i = 0; i < m; i++) {
            for (int j = (i + 1) * x; j >= cost[i]; j--) {
                dp[j] = max(dp[j], dp[j - cost[i]] + happiness[i]);
            }
        }
        
        // The answer for this test case is the maximum value in the dp array
        int max_happiness = *max_element(dp.begin(), dp.end());
        
        cout << max_happiness << endl;
    }
    
    return 0;
}
