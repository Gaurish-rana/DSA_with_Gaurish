#include <bits/stdc++.h>
using namespace std;

/*
Question:
Rearrange Array Elements by Sign

Given an array with equal number of positive and negative elements,
rearrange them in alternating order starting with positive.
*/

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> arr(n);

        int posi = 0; // even index
        int negi = 1; // odd index

        for (int i = 0; i < n; i++) {
            if (nums[i] < 0) {
                arr[negi] = nums[i];
                negi += 2;
            } else {
                arr[posi] = nums[i];
                posi += 2;
            }
        }
        return arr;
    }
};

int main() {
    vector<int> nums = {3, 1, -2, -5, 2, -4};

    Solution obj;
    vector<int> result = obj.rearrangeArray(nums);

    cout << "Rearranged Array: ";
    for (int x : result) {
        cout << x << " ";
    }

    return 0;
}