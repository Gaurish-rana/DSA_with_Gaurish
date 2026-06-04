#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

vector<int> superiorElements(vector<int>& a) {
    vector<int> ans;
    int maxi = INT_MIN;

    for (int i = a.size() - 1; i >= 0; i--) {
        if (a[i] > maxi) {
            ans.push_back(a[i]);
            maxi = a[i];
        }
    }

    reverse(ans.begin(), ans.end());
    return ans;
}

int main() {
    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<int> result = superiorElements(a);

    for (int x : result) {
        cout << x << " ";
    }

    return 0;
}