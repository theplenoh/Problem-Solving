#include <stdio.h>

int main()
{
    int i, j;

    for(i=13; i<=19; i++)
    {
        for(j=1; j<=9; j++)
        {
            printf("%d * %d = %2d\n", i, j, i*j);
        }
        puts("");
    }

    return 0;
}
