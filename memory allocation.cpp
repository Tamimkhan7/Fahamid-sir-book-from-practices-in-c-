#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
int main ()
{
    int *p;
    p = (int *)malloc(5000);
    p = (int *)calloc(50, sizeof(double));
    if (p == NULL)
    {
        cout<<"Memory not allocated"<<endl;
    }
    else
    {
        cout<<"Memory allocation successful"<<endl;
    }
    free(p);

    cout<<"Memory free successful"<<endl;


    return 0;
}
