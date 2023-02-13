#include <stdio.h>

#define DEL -1

void eratos_sieve(const int MAX)
{
    int arr[MAX+1];
    int i, j;
    int primes[MAX+1];
    int pIdx = 0;

    for(i=0; i<=MAX; i++)
        arr[i] = i;

    arr[0] = DEL;
    arr[1] = DEL;

    for(i=2; i<MAX; i++)
    {
        if(arr[i] == DEL)
            continue;
        primes[pIdx++] = arr[i];
        for(j=1; i*j<MAX; j++)
        {
            arr[i*j] = DEL;
        }
    }

    for(i=0; i<10; i++)
        printf("%d ", primes[i]);
    puts("");
}

int main()
{
    eratos_sieve(120);
    return 0;
}
