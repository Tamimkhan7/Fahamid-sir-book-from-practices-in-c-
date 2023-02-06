//stringstream function ar kaj
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s,st;
    getline(cin, s);//string line input neoyar jonno getline use kora hoy, ar c te gets nile input neoya jay pura line
    stringstream ss(s);
    while(ss>>st)//logic ta kaj kore basically joto time amar string ace toto time gurbe ar st print korbe
    {
        cout<<st<<endl;
    }
}
