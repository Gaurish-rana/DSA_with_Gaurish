#include <bits/stdc++.h>
using namespace std;

// Function to check whether array is sorted or not
bool isSorted(int n, vector<int> a)
{
    for(int i = 1; i < n; i++)
    {
        // If current element is smaller than previous
        if(a[i] >= a[i - 1])
        {
            // Array is still sorted
        }
        else
        {
            return false;
        }
    }

    return true;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};

    int n = arr.size();

    bool ans = isSorted(n, arr);

    if(ans)
    {
        cout << "Array is Sorted";
    }
    else
    {
        cout << "Array is Not Sorted";
    }

    return 0;
}