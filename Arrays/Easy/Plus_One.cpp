#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {

        int n = digits.size();

        for(int i = n - 1; i >= 0; i--) {

            // If digit is less than 9
            if(digits[i] < 9) {
                digits[i]++;
                return digits;
            }

            // If digit is 9
            digits[i] = 0;
        }

        // If all digits are 9
        digits.insert(digits.begin(), 1);

        return digits;
    }
};

int main() {

    vector<int> digits = {9, 9, 9};

    Solution obj;

    vector<int> result = obj.plusOne(digits);

    cout << "Result: ";

    for(int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }

    return 0;
}