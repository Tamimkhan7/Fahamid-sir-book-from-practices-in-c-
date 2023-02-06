#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[100],n,i;
    cin>>n;//10
    //logic for binary conversion

    for(i=0; 0<n; i++)
    {
        arr[i] = n%2;
        n = n/2;
    }
    i--;
    while(i>=0)
    {
        cout<<arr[i];
        i--;
    }
    cout<<endl;
}


