#include <stdio.h>

int print_recursion_reversed(int n)
{
    if ( n == 1 )
        printf("%d\n", n);
    else
    {
        printf("%d\n", n);
        print_recursion_reversed(n - 1);
    }
}

int main()
{
    int n;

    scanf("%d", &n);
    print_recursion_reversed(n);

    return 0;
}
