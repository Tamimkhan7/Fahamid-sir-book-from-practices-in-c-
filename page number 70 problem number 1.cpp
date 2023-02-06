#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    int arr[n], maxi,mini;
    for ( i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    maxi = arr[0];
    mini = arr[0];
    for(int j = 1; j<n; j++)
    {
        if(arr[j] < mini)
        {
            mini = arr[j];
        }
        else if(maxi < arr[j])
        {
            maxi = arr[j];
        }
    }
    cout<<"maximum value "<<maxi<<endl;
    cout<<"minimum value "<<mini<<endl;

}
