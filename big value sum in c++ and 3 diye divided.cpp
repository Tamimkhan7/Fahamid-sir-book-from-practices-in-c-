#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int c=0;
    int len = s.size();
    for(int i=0; i<len; i++)
    {
        c += s[i] -'0';
    }
    if (c%3==0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

}
