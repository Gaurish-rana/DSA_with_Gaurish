/*
Question:
Given an array containing positive and negative integers,
arrange them alternately while maintaining their relative order.

Example:
Input:  [1, 2, -4, -5, 3, 4]
Output: [1, -4, 2, -5, 3, 4]

If one type (positive/negative) has extra elements,
place the remaining elements at the end while preserving order.

Approach:
1. Store positive numbers in one vector and negative numbers in another.
2. Place them alternately in the original array.
3. Append the remaining elements of the larger vector at the end.

Time Complexity: O(N)
Space Complexity: O(N)
*/

#include <iostream>
#include <vector>
using namespace std;

vector<int> alternateNumbers(vector<int>& a) {
    vector<int> pos, neg;

    int n = a.size();

    for (int i = 0; i < n; i++) {
        if (a[i] > 0) {
            pos.push_back(a[i]);
        } else {
            neg.push_back(a[i]);
        }
    }

    if (pos.size() > neg.size()) {

        for (int i = 0; i < neg.size(); i++) {
            a[2 * i] = pos[i];
            a[2 * i + 1] = neg[i];
        }

        int index = neg.size() * 2;

        for (int i = neg.size(); i < pos.size(); i++) {
            a[index] = pos[i];
            index++;
        }
    }
    else {

        for (int i = 0; i < pos.size(); i++) {
            a[2 * i] = pos[i];
            a[2 * i + 1] = neg[i];
        }

        int index = pos.size() * 2;

        for (int i = pos.size(); i < neg.size(); i++) {
            a[index] = neg[i];
            index++;
        }
    }

    return a;
}

int main() {
    vector<int> arr = {1, 2, -4, -5, 3, 4};

    vector<int> result = alternateNumbers(arr);

    cout << "Result: ";
    for (int x : result) {
        cout << x << " ";
    }

    return 0;
}