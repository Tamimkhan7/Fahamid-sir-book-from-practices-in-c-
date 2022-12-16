#include <iostream>
using namespace std;
int main ()
{
    int n, i;
    cin>>n;
    for (i=1; i<=100; i++)
    {
        int k = n*i;
        cout<<n<<" * "<<i << " = " <<k<<endl;
    }

    return 0;
}
