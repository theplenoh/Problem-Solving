#include <stdio.h>

#define TRUE 1
#define FALSE 0

#define ARR_SZ 100

int isPrime(const int n)
{
    if(n <= 1)
        return FALSE;

    int arr[ARR_SZ];
    int primeNums[ARR_SZ];

    // Generate an array consisting of a list of numbers from `0` to `n`
    for(int i=0; i<=n; i++)
        arr[i] = i;

    // If the value is not a prime number, then insert value `(int)-1`
    arr[0] = -1;
    arr[1] = -1;
}

int main()
{
    printf("%d\n", FALSE);
    return 0;
}
