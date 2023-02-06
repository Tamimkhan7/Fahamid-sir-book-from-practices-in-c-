#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int rem = a%b;
    while( rem !=0)
    {
        a = b;
        b = rem;
        rem = a%b;
    }

    cout<<"MY GCD is "<<b<<endl;


}
