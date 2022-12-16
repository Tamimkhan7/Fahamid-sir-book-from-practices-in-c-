#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int arr[50], n, i, k;
    cin>>n;
    for (i=0; i<n; i++)
    {
        cin>>arr[i];
        k = sizeof(arr);
        sort(arr, arr+k);
    }
    for (i=0; i<k; i++)
    {

        cout<<arr[i]<<" ";
    }


    return 0;
}
