#include <stdio.h>

void printMultiTable(const int n)
{
    int i;

    printf("## Multiplication Table: %d\n", n);
    for(i=1; i<=9; i++)
    {
        printf("%d x %d = %2d\n", n, i, n*i);
    }
}

int main()
{
    int m, n;
    int i;
    int temp;

    printf("m and n: ");
    scanf("%d %d", &m, &n);


    if(m > n)
    {
        temp = m;
        m = n;
        n = temp;
    }

    for(i=m; i<=n; i++)
        printMultiTable(i);

    return 0;
}
