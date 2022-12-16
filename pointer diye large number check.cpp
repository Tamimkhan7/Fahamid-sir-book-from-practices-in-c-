#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int x, y, z;
    cin>>x>>y>>z;
    int *p1, *p2, *p3;
    p1 = &x;
    p2 = &y;
    p3 = &z;

    if (*p1>*p2 && *p1>*p3)
    {
        cout<<"Large number is "<<*p1<<endl;
    }
    else if (*p2>*p1 && *p2>*p3)
    {
        cout<<"Large number is "<<*p2<<endl;
    }
    else
    {
        cout<<"Large number is "<<*p3<<endl;
    }

    return 0;
}
