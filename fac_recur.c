#include <stdio.h>

long long int fac_recur(long long int n)
{
    if (n <= 1)
        return 1;
    else
        return n * fac_recur(n - 1);
}

int main()
{
    long long int input;

    scanf("%lld", &input);

    printf("%lld", fac_recur(input));

    return 0;
}
