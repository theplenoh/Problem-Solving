#include <stdio.h>
#define SZ 5

int main()
{
    int arr[SZ] = {3, 2, 5, 1, 4};
    int i, j;
    int tmp;

/*
    for(i=0; i<SZ; i++)
    {
        printf("arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
*/

    for(i=0; i<SZ-1; i++) // i: 0 1 2 3 4
    {
        printf("\ni(%d)\n", i);
        for(j=0; j<SZ-i-1; j++) // SZ-i-1: 4 3 2 1 0
        {
            if(arr[j] > arr[j+1])
            {
                tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
            printf("SZ-i-1(%d) ", SZ-i-1);
        }
    }
    puts("");
    puts("");

    for(i=0; i<SZ; i++)
    {
        printf("%d ", arr[i]);
    }
    puts("");

    return 0;
}
