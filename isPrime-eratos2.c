#include <stdio.h>

#define TRUE 1
#define FALSE 0

void eratos_sieve(const int MAX, const int rangeM, const int rangeN)
{
    int arr[MAX+1];
    int i, j;

    // Fill `arr` with TRUEs
    for(i=0; i<=MAX; i++)
        arr[i] = TRUE;

    // Mark non-prime numbers with FALSE
    arr[0] = FALSE;
    arr[1] = FALSE;
    for(i=2; i<=MAX; i++)
    {
        if(arr[i] == FALSE)
            continue;
        arr[i] = i;
        for(j=2; i*j<=MAX; j++)
            arr[i*j] = FALSE;
    }

    for(i=0; i<=MAX; i++)
    {
        if((arr[i] != FALSE) && (rangeM <= arr[i] && arr[i] <= rangeN))
            printf("%d ", arr[i]);
    }
}

int main()
{
    int inputA, inputB;

    scanf("%d %d", &inputA, &inputB);

    eratos_sieve(1000000, inputA, inputB);
    return 0;
}
