#include <bits/stdc++.h>
using namespace std;

int majorityElement(vector<int> v) {
    int cnt = 0;
    int el;

    // Moore's Voting Algorithm
    for (int i = 0; i < v.size(); i++) {
        if (cnt == 0) {
            cnt = 1;
            el = v[i];
        }
        else if (v[i] == el) {
            cnt++;
        }
        else {
            cnt--;
        }
    }

    // Verify candidate
    int cnt1 = 0;
    for (int i = 0; i < v.size(); i++) {
        if (v[i] == el)
            cnt1++;
    }

    if (cnt1 > (v.size() / 2)) {
        return el;
    }

    return -1;
}

int main() {
    vector<int> v = {2, 2, 1, 1, 1, 2, 2};

    cout << "Majority Element: " << majorityElement(v) << endl;

    return 0;
}