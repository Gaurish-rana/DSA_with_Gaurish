#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;

        for (int i = 0; i < nums.size(); i++) {
            int idx = abs(nums[i]) - 1;

            if (nums[idx] < 0) {
                ans.push_back(abs(nums[i]));
            } else {
                nums[idx] = -nums[idx];
            }
        }

        return ans;
    }
};

int main() {
    vector<int> nums = {4, 3, 2, 7, 8, 2, 3, 1};

    Solution obj;
    vector<int> ans = obj.findDuplicates(nums);

    for (int x : ans) {
        cout << x << " ";
    }

    cout << endl;

    return 0;
}