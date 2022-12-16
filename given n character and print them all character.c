#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main ()
{
    int n, i;
    scanf("%d\n", &n);
    char c[5000];
    for (i=0; i<n; i++)
    {
        scanf("%c", &c[i]);
    }

    for (i=0; i<n; i++)
    {
        printf("%c\n", c[i]);
    }




    return 0;
}
