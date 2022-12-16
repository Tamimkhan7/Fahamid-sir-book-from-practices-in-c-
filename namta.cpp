#include <iostream>
using namespace std;
int main ()
{
    int n, i;
    cin>>n;
    int k;
    for (i=1; i<=10; i++)
    {
        k = n*i;
        cout<<n<<" * "<<i <<" = "<<k<<endl;
    }


    return 0;
}
