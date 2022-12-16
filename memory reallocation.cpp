#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
int main ()
{
    int *p1, *p2;
    p1 = (int *)malloc(5000);
    p2 = (int *)calloc(50, sizeof(double));
    if (p1 == NULL || p2 == NULL)
    {
        cout<<"Memory not allocated"<<endl;
    }
    else
    {
        cout<<"Memory allocation successful"<<endl;
    }
    //free(p);
    //cout<<"Memory free successful"<<endl;
    realloc(p1, 50);
    cout<<"Memory reallocation successful"<<endl;


    return 0;
}
