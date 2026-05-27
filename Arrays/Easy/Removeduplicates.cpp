#include <bits/stdc++.h>
using namespace std;

// Function to remove duplicates from sorted array
int removeDuplicates(vector<int> &arr, int n)
{
    int i = 0;

    // j is used to traverse the array
    for(int j = 1; j < n; j++)
    {
        // If current element is different
        if(arr[i] != arr[j])
        {
            arr[i + 1] = arr[j];
            i++;
        }
    }

    return i + 1;
}

int main()
{
    vector<int> arr = {1, 1, 2, 2, 2, 3, 3};

    int n = arr.size();

    int k = removeDuplicates(arr, n);

    cout << "Array after removing duplicates:\n";

    for(int i = 0; i < k; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}