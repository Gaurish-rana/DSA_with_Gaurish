#include <iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;

        long long original = x;
        long long reversed = 0;

        while (x > 0) {
            int digit = x % 10;
            reversed = reversed * 10 + digit;
            x /= 10;
        }

        return original == reversed;
    }
};

int main() {
    Solution obj;

    int x;
    cin >> x;

    if (obj.isPalindrome(x))
        cout << "true" << endl;
    else
        cout << "false" << endl;

    return 0;
}