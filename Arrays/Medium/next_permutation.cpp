#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void nextPermutation(vector<int>& nums) {
    int n = nums.size();
    int ind = -1;

    // Find breakpoint
    for (int i = n - 2; i >= 0; i--) {
        if (nums[i] < nums[i + 1]) {
            ind = i;
            break;
        }
    }

    // If no breakpoint found, reverse entire array
    if (ind == -1) {
        reverse(nums.begin(), nums.end());
        return;
    }

    // Find next greater element from the right
    for (int i = n - 1; i > ind; i--) {
        if (nums[i] > nums[ind]) {
            swap(nums[i], nums[ind]);
            break;
        }
    }

    // Reverse the right half
    reverse(nums.begin() + ind + 1, nums.end());
}

int main() {
    vector<int> nums = {1, 3, 2};

    nextPermutation(nums);

    cout << "Next Permutation: ";
    for (int x : nums) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}