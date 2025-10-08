#include <stdio.h>

int fac_recur(int n)
{
    if (n <= 1)
        return 1;
    else
        return n * fac_recur(n - 1);
}

int main()
{
    int input;

    scanf("%d", &input);

    printf("%d\n", fac_recur(input));

    return 0;
}
