#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to find the length of the longest increasing subsequence
int longestIncreasingSubsequence(const vector<int>& arr) {
    if (arr.empty()) return 0;

    // Create a dp array where dp[i] represents the length of the LIS ending at index i
    vector<int> dp(arr.size(), 1);

    int maxLength = 1;

    // Compute the LIS length for each element
    for (size_t i = 1; i < arr.size(); ++i) {
        for (size_t j = 0; j < i; ++j) {
            if (arr[i] > arr[j] && dp[i] < dp[j] + 1) {
                dp[i] = dp[j] + 1;
            }
        }
        // Update the maximum length found so far
        maxLength = max(maxLength, dp[i]);
    }

    return maxLength;
}

int main() {
    vector<int> arr = {10, 22, 9, 33, 21, 50, 41, 60, 80};
    
    int length = longestIncreasingSubsequence(arr);
    
    cout << "Length of the Longest Increasing Subsequence is: " << length << endl;

    return 0;
}

