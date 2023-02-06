#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    if(b==0)
    {
        return a;//return b dile oh problem cilo na
    }
    else
    {
        return gcd(b, a%b);//using recursion formated
    }
}
int main()
{
    int a,b;
    cin>>a>>b;
    //a*b ke gcd value dara vag hole gcd hobe oi propto man ar vag na hole gcd hobe initital a*b ar value
    cout<<"LCM of "<<(a*b)/gcd(a,b)<<endl;
    return 0;
}
