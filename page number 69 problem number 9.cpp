#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
int main()
{
    int n,m,sum=0,p;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        string k,m;
        cin>>k;
        reverse(k.begin(), k.end());
        int r = k.length();
        for(int j=0; j<r; j++)
        {
            m = k[0];
            //string to int value convert
            stringstream ss(m);
            ss>>p;
        }
        sum = sum+p;
        cout<<sum<<endl;
    }
}
