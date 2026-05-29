#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:

    vector<int> sortedSquares(vector<int>& nums) {

        int n = nums.size();

        vector<int> arr(n);

        int left = 0;
        int right = n - 1;

        int index = n - 1;

        while(left <= right) {

            int leftSquare = nums[left] * nums[left];
            int rightSquare = nums[right] * nums[right];

            if(leftSquare > rightSquare) {

                arr[index] = leftSquare;
                left++;

            } else {

                arr[index] = rightSquare;
                right--;
            }

            index--;
        }

        return arr;
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