#include <stdio.h>
#include <string.h>

#define STR_LEN 31

char result[STR_LEN];
int result_len = 0;

void str_reverse(char*, const int);
void dec2bin(int);
void print_result();

int main()
{
    int input;

    printf("input: ");
    scanf("%d", &input);

    dec2bin(input);
    print_result();

    return 0;
}

void dec2bin(int num)
{
    int cnt = 1;

    result[0] = '\0';

    while (num != 0)
    {
        result[cnt++] = '0' + (num % 2);
        num = num / 2;
    }

    result_len = cnt - 1;

    str_reverse(result, result_len);
}

void print_result()
{
    int i = 0;
    while(result[i] != '\0')
        printf("%c", result[i++]);

    printf("\n");
}

void str_reverse(char* str, const int str_len)
{
    int i, len, temp;
    len = str_len + 1;

    // Swap characters
    for(i=0; i < len/2; i++)
    {
        temp = str[i];
        str[i] = str[len-i-1];
        str[len-i-1] = temp;
    }
}
