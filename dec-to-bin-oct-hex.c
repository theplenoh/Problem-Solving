#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define STR_LEN 64

void dec2bin(char* const, int);
void str_reverse(char* const, const int);

int main()
{
    char result[STR_LEN];

    int input;

    char hex[16][5];

    strcpy(hex[0], "0000");
    strcpy(hex[1], "0001");
    strcpy(hex[2], "0010");
    strcpy(hex[3], "0011");
    strcpy(hex[4], "0100");
    strcpy(hex[5], "0101");
    strcpy(hex[6], "0110");
    strcpy(hex[7], "0111");
    strcpy(hex[8], "1000");
    strcpy(hex[9], "1001");
    strcpy(hex[10], "1010");
    strcpy(hex[11], "1011");
    strcpy(hex[12], "1100");
    strcpy(hex[13], "1101");
    strcpy(hex[14], "1110");
    strcpy(hex[15], "1111");

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
