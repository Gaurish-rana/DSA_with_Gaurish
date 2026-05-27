#include <bits/stdc++.h>
using namespace std;

// Function to rotate array left by one place
vector<int> rotateArray(vector<int> &arr, int n)
{
    // Store first element
    int temp = arr[0];

    // Shift elements to left
    for(int i = 1; i < n; i++)
    {
        arr[i - 1] = arr[i];
    }

    // Place first element at last
    arr[n - 1] = temp;

    return arr;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};

    int n = arr.size();

    rotateArray(arr, n);

    cout << "Array after left rotation:\n";

    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}