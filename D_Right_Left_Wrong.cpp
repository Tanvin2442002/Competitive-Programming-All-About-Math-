#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        string s;
        cin >> s;

        long long max_score = 0;

        // Traverse the strip to find valid ranges and calculate their scores
        int i = 0;
        while (i < n) {
            if (s[i] == 'L') {
                int j = i + 1;
                while (j < n && s[j] != 'R') {
                    j++;
                }
                if (j < n && s[j] == 'R') {
                    // Add the sum of elements from i to j to max_score
                    for (int k = i; k <= j; ++k) {
                        max_score += a[k];
                    }
                    i = j + 1; // Move past this range
                } else {
                    break;
                }
            } else {
                i++;
            }
        }

        cout << max_score << endl;
    }

    return 0;
}
