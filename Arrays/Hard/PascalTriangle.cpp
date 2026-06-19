#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;

        for (int row = 1; row <= numRows; row++) {
            vector<int> ansRow;
            int val = 1;

            ansRow.push_back(1);

            for (int col = 1; col < row; col++) {
                val = val * (row - col) / col;
                ansRow.push_back(val);
            }

            ans.push_back(ansRow);
        }

        return ans;
    }
};

int main() {
    int numRows;
    cout << "Enter number of rows: ";
    cin >> numRows;

    Solution obj;
    vector<vector<int>> result = obj.generate(numRows);

    cout << "Pascal's Triangle:\n";
    for (const auto& row : result) {
        for (int num : row) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}