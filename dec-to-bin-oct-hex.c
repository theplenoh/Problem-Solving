#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define STR_LEN 31

/*
(hex[0])  = "0000";
(hex[1])  = "0001";
(hex[2])  = "0010";
(hex[3])  = "0011";
(hex[4])  = "0100";
(hex[5])  = "0101";
(hex[6])  = "0110";
(hex[7])  = "0111";
(hex[8])  = "1000";
(hex[9])  = "1001";
(hex[10]) = "1010";
(hex[11]) = "1011";
(hex[12]) = "1100";
(hex[13]) = "1101";
(hex[14]) = "1110";
(hex[15]) = "1111";
*/

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
