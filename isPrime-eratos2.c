#include <stdio.h>

#define TRUE 1
#define FALSE 0

void eratos_sieve(const int MAX)
{
    int arr[MAX+1];
    int i, j, cnt;

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
        arr[i] = TRUE;
        for(j=2; i*j<=MAX; j++)
            arr[i*j] = FALSE;
    }

    // Print what's in the first 10 array cells marked TRUE
    for(i=0, cnt=1; cnt<=10 && i<=MAX; i++)
    {
        if(arr[i])
        {
            printf("%d ", i);
            cnt++;
        }
    }
    puts("");
}

int main()
{
    eratos_sieve(100);
    return 0;
}
