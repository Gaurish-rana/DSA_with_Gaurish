
#include <bits/stdc++.h>
using namespace std;

// Function to find largest element
int largestElement(vector<int> &arr, int n)
{
    int largest = arr[0];

    for(int i = 0; i < n; i++)
    {
        if(arr[i] > largest)
        {
            largest = arr[i];
        }
    }

    return largest;
}

int main()
{
    vector<int> arr = {2, 5, 1, 3, 0};

    int n = arr.size();

    int ans = largestElement(arr, n);

    cout << "Largest element is: " << ans;

    return 0;
}