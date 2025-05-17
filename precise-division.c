#include <stdio.h>

int main()
{
    int a, b;

    scanf("%d %d", &a, &b);

    printf("%.12Lf", (long double)a / (long double)b);

    return 0;
}
