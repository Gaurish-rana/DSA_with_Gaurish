#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:

    int findNumbers(vector<int>& nums) {

        int n = nums.size();
        int k = 0;

        for(int i = 0; i < n; i++) {

            if(to_string(nums[i]).length() % 2 == 0) {
                k++;
            }
        }

        return k;
    }
};

int main() {

    Solution obj;

    vector<int> nums = {12, 345, 2, 6, 7896};

    cout << obj.findNumbers(nums);

    return 0;
}