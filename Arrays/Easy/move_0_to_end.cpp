#include <bits/stdc++.h>
using namespace std;

vector<int> moveZeros(int n, vector<int> a) {

    int j = -1;

    // Find first zero
    for (int i = 0; i < n; i++) {
        if (a[i] == 0) {
            j = i;
            break;
        }
    }

    // If no zero found
    if (j == -1)
        return a;

    // Move non-zero elements forward
    for (int i = j + 1; i < n; i++) {

        if (a[i] != 0) {
            swap(a[i], a[j]);
            j++;
        }
    }

    return a;
}

int main() {

    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<int> ans = moveZeros(n, a);

    for (int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }

    return 0;
}