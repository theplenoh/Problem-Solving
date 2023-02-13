#include <stdio.h>

void bubbleSort(int arr[], int arrSz)
{
    int i, j;
    int tmp;

    for(i=0; i<arrSz-1; i++)
    {
        for(j=0; j<arrSz-i-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
        }
    }
}

void bubbleSort2(int arr[], int arrSz)
{
    int i, j;
    int tmp;

    for(i=0; i<arrSz-1; i++)
    {
        for(j=0; j<arrSz-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
        }
    }
}

void printArr(int arr[], int arrSz)
{
    int i;
    for(i=0; i<arrSz; i++)
        printf("%d ", arr[i]);

    puts("");
}

int main()
{
    int myArr[] = {3, 2, 5, 1, 4};

    bubbleSort2(myArr, sizeof(myArr)/sizeof(int));

    printArr(myArr, sizeof(myArr)/sizeof(int));

    return 0;
}
