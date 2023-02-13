#include <stdio.h>

int getGCDe(int a, int b)
{
    int r;

    while(r != 0)
    {
        r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main()
{
    int a, b;
    int temp;

    // Inputs
    printf("a and b: ");
    scanf("%d %d", &a, &b);

    // Swap `a` and `b` if `b` is bigger
    if(a < b)
    {
        temp = a;
        a = b;
        b = temp;
    }

    printf("%d \n", getGCDe(a, b));

    return 0;
}
