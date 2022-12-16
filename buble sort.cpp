#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int arr[500], i, n, j, temp;
    cout<<"Enter the value : ";
    cin>>n;
    for (i=0; i<n; i++)
    {
        cin>>arr[i];//10 40 30 50 15 80
    }
    cout<<endl;
    for (i=0; i<n; i++)
    {
        for (j=i+1; j<n; j++)
        {
            if (arr[i]<arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}
