#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int N,i,j,k;
    cin>>N;
    for (i=1; i<=N; i++)
    {
        for (j=i; j<=N; j++)
        {
            cout<<" ";
        }
        for (k=1; k<=(2*i-1); k ++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}
