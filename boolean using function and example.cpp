#include <bits/stdc++.h>
using namespace std;
bool is4digits(string pin)
{
    bool status;
    if(pin.length() ==4)
    {
         return status = true;
    }
    else
    {
        return status = false;
    }
    // status;
}
int main()
{
    string pin;
    cin>>pin;
    if(is4digits(pin)==1)
        cout<<"Pin Accepted.";
    else
        cout<<"Pin Denied.";
    cout<<endl;

}
