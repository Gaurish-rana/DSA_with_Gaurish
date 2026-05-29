#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:

    vector<int> sortedSquares(vector<int>& nums) {

        int n = nums.size();

        for(int i = 0; i < n; i++) {

            nums[i] = nums[i] * nums[i];
        }

        sort(nums.begin(), nums.end());

        return nums;
    }
};

int main() {

    Solution obj;

    vector<int> nums = {-4, -1, 0, 3, 10};

    vector<int> ans = obj.sortedSquares(nums);

    for(int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }

    return 0;
}