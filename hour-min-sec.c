#include <stdio.h>

void printFormatTime(int input)
{
    int hr, min, sec;

    hr = input / (60*60);
    input = input % (60*60);
    min = input / 60;
    input = input % 60;
    sec = input;

    printf("%d시간 %d분 %d초\n", hr, min, sec);
}

int main()
{
    int input;

    printf("input(secs): ");
    scanf("%d", &input);

    printFormatTime(input);
}
