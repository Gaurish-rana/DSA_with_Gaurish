#include <bits/stdc++.h>
using namespace std;

/*
Question:
Kadane's Algorithm normally returns the maximum subarray sum.
How can we modify it to also return the actual subarray that
gives the maximum sum while keeping the same O(n) time complexity?
*/

int main() {
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    int sum = 0;
    int maxi = INT_MIN;

    // To track the subarray
    int start = 0;      // Potential start of current subarray
    int ansStart = -1;  // Start index of max sum subarray
    int ansEnd = -1;    // End index of max sum subarray

    for (int i = 0; i < nums.size(); i++) {

        // If starting a new subarray, mark its start
        if (sum == 0) {
            start = i;
        }

        sum += nums[i];

        // Update maximum sum and save indices
        if (sum > maxi) {
            maxi = sum;
            ansStart = start;
            ansEnd = i;
        }

        // Reset if current sum becomes negative
        if (sum < 0) {
            sum = 0;
        }
    }

    cout << "Maximum Sum = " << maxi << endl;

    cout << "Subarray: ";
    for (int i = ansStart; i <= ansEnd; i++) {
        cout << nums[i] << " ";
    }

    return 0;
}