#include <iostream>
using namespace std;

class Solution {
public:
    int sum(int num1, int num2) {
        int sum1 = num1 + num2;
        return sum1;
    }
};

int main() {
    Solution obj;

    int num1, num2;
    cin >> num1 >> num2;

    cout << obj.sum(num1, num2) << endl;

    return 0;
}