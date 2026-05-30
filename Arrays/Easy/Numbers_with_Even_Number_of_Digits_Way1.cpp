#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:

    int countDigits(int n) {

        int count = 0;

        while(n > 0) {
            count++;
            n = n / 10;
        }

        return count;
    }

    int findNumbers(vector<int>& nums) {

        int ans = 0;

        for(int i = 0; i < nums.size(); i++) {

            int digits = countDigits(nums[i]);

            if(digits % 2 == 0) {
                ans++;
            }
        }

        return ans;
    }
};

int main() {

    Solution obj;

    vector<int> nums = {12, 345, 2, 6, 7896};

    cout << obj.findNumbers(nums);

    return 0;
}