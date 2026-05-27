#include <bits/stdc++.h>
using namespace std;

// Function to find second largest element
int secondLargest(vector<int> &a, int n)
{
    int largest = a[0];
    int slargest = -1;

    for(int i = 1; i < n; i++)
    {
        // If current element is greater than largest
        if(a[i] > largest)
        {
            slargest = largest;
            largest = a[i];
        }

        // If current element lies between largest and second largest
        else if(a[i] < largest && a[i] > slargest)
        {
            slargest = a[i];
        }
    }

    return slargest;
}

int main()
{
    vector<int> arr = {1, 2, 4, 7, 7, 5};

    int n = arr.size();

    int ans = secondLargest(arr, n);

    cout << "Second Largest Element is: " << ans;

    return 0;
}