#include <stdio.h>

int main()
{
    int i;
    int arr[10];

    puts("총 10개의 숫자 입력");
    for(i=0; i<10; i++)
    {
        printf("?: ");
        scanf("%d", &arr[i]);
    }

    printf("홀수 출력: ");
    for(i=0; i<10; i++)
    {
        if((arr[i] % 2))
            printf("%d, ", arr[i]);
    }
    puts("");
    printf("짝수 출력: ");
    for(i=0; i<10; i++)
    {
        if(!(arr[i] % 2))
            printf("%d, ", arr[i]);
    }
    puts("");

    return 0;
}
