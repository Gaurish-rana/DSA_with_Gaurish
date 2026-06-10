#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int m = accounts.size();
        int n = accounts[0].size();

        int maxWealth = 0;

        for (int i = 0; i < m; i++) {
            int wealth = 0;

            for (int j = 0; j < n; j++) {
                wealth += accounts[i][j];
            }

            if (wealth > maxWealth) {
                maxWealth = wealth;
            }
        }

        return maxWealth;
    }
};

int main() {
    vector<vector<int>> accounts = {
        {1, 2, 3},
        {3, 2, 1},
        {4, 5, 6},
        {5, 6, 7}
    };

    Solution obj;
    cout << "Maximum Wealth: " << obj.maximumWealth(accounts) << endl;

    return 0;
}