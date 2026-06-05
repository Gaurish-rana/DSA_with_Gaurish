#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>
using namespace std;

int longestSuccessiveElements(vector<int>& a) {
    int n = a.size();

    if (n == 0)
        return 0;

    int longest = 1;
    unordered_set<int> st;

    // Insert all elements into the set
    for (int i = 0; i < n; i++) {
        st.insert(a[i]);
    }

    // Find the longest consecutive sequence
    for (auto it : st) {
        // Check if current element is the start of a sequence
        if (st.find(it - 1) == st.end()) {
            int cnt = 1;
            int x = it;

            while (st.find(x + 1) != st.end()) {
                x = x + 1;
                cnt = cnt + 1;
            }

            longest = max(longest, cnt);
        }
    }

    return longest;
}

int main() {
    vector<int> nums = {100, 4, 200, 1, 3, 2};

    cout << "Length of Longest Consecutive Sequence: "
         << longestSuccessiveElements(nums) << endl;

    return 0;
}