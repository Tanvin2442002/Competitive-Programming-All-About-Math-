#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to find the median of a sorted vector
int findMedian(vector<int>& subarray) {
    sort(subarray.begin(), subarray.end());
    return subarray[subarray.size() / 2];
}

int main() {
    int t;
    cin >> t; // Read the number of test cases
    while (t--) {
        int n;
        cin >> n; // Read the length of the array
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i]; // Read the elements of the array
        }

        // Perform the brute-force operations
        bool changed = true;
        while (changed) {
            changed = false;
            for (int l = 0; l < n - 1; ++l) {
                for (int r = l + 1; r < n; ++r) {
                    vector<int> subarray(a.begin() + l, a.begin() + r + 1);
                    int median = findMedian(subarray);
                    for (int i = l; i <= r; ++i) {
                        if (a[i] != median) {
                            a[i] = median;
                            changed = true;
                        }
                    }
                }
            }
        }

        // Output the final value (all elements should be the same)
        cout << a[0] << endl;
    }
    return 0;
}
