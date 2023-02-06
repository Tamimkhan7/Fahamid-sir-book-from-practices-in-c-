//using stringstream function
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, st;
    getline(cin, s);
    //string ke stringstream koreci mane string ke banga
    stringstream ss(s);
    int p=0, arr[100];
    //string ar value inside the array
    while(ss>>arr[p])
    {
        p++;
    }
    for(int i=0; i<p; i++)
    {
        cout<<arr[i]<<endl;
    }
}
