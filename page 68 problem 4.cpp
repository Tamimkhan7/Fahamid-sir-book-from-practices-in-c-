#include <bits/stdc++.h>
using namespace std;
int main()
{
    char c;
    int s =0;
    //while loop use korar mane holo se value ta bar bar input nitbe
    while(scanf("%c", &c) && c!= '\n')  //input nibo null char ag projnto// input ta cin diye neoya jabe na input ta scanf diye nite hobe
    {
        s += c -'0'; // string to integer value convert and string ar value ta ascii value theke minus kore nicce
    }
    if(s%3==0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

}
