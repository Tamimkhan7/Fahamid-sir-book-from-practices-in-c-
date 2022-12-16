#include <stdio.h>
using namespace std;
int main ()
{
    char c;
    int s = 0;
    while(scanf("%c", &c)&& c != '\n')
    {
        s = s+c-'0';
    }
    if (s%3==0)
    {
        printf("Yes\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}
