#include <iostream>
using namespace std;
int main ()
{
    char name;
    cin>>name;
    if (name >= 'A' && 'Z'>= name)
    {
        cout<<"Capital letter";
    }
    else if (name >= 'a' && name <= 'z')
    {
        cout<<"Small letter";
    }
    else
    {
        cout<<"special character";
    }

    return 0;
}
