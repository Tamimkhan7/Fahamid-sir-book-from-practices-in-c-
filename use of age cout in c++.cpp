#include <iostream>
using namespace std;
int main ()
{
    int a, b, year, month, days;
    cout<<"Anindita age is : ";
    cin>>year>>month>>days;//1 year, 2months, 25days
    //7 66cout<<endl;
    cout<<"Malihar age is : ";
    cin>>year>>month>>days;
    int result1 = ((year*365) + (30+month)+days);
    int result2 = ((year*365) + (30+month)+days);
    if (result1>result2)
    {
        cout<<"Alindita is "<<result1<<endl;
    }
    else
    {
        cout<<"Malihar is "<<result2<<endl;
    }


    return 0;
}
