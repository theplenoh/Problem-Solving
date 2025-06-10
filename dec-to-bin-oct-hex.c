#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define STR_LEN 64

const char* hex[16] = {
    "0000",
    "0001",
    "0010",
    "0011",
    "0100",
    "0101",
    "0110",
    "0111",
    "1000",
    "1001",
    "1010",
    "1011",
    "1100",
    "1101",
    "1110",
    "1111"
};

void dec2bin(char* const, int);
void str_reverse(char* const, const int);

int main()
{
    char result[STR_LEN];
    int input;

    printf("input: ");
    scanf("%d", &input);

    dec2bin(result, input);

    puts(result);

    return 0;
}

void dec2bin(char* const str, int number)
{
    int cnt = 0;

    str[cnt++] = '\0';

    while (number != 0)
    {
        str[cnt++] = '0' + (number % 2);
        number = number / 2;
    }

    str_reverse(str, cnt);
}

void bin2hex()
{
}

// Manually reverse a C-style string
void str_reverse(char* const str, const int len)
{
    char tmp;

    int i = 0;
    int j = len - 1;

    while (i < j)
    {
        tmp = str[i];
        str[i] = str[j];
        str[j] = tmp;

        i++;
        j--;
    }
}
