#include <bits/stdc++.h>
using namespace std;

int findOnce(int arr[], int n)
{
    int xorr = 0;

    for(int i = 0; i < n; i++)
    {
        xorr = xorr ^ arr[i];
    }

    return xorr;
}

int main()
{
    int arr[] = {1,1,2,3,3,4,4};
    int n = 7;

    cout << "Element appearing once: " << findOnce(arr, n);

    return 0;
}