#include <stdio.h>

int str_len(const char* my_str)
{
    int i;
    for(i=0; my_str[i]!='\0'; i++);
    return i;
}

void str_reverse(char* my_str)
{
    int i, len, temp;
    len = str_len(my_str);

    // swap chars
    for(i=0; i < len/2; i++)
    {
        temp = my_str[i];
        my_str[i] = my_str[len-i-1];
        my_str[len-i-1] = temp;
    }
}

char hex2char(const int remainder)
{
    if(remainder < 10)
    {
        return remainder + 48;
    }
    else if(10 <= remainder && remainder <= 15)
    {
        return remainder + 55;
    }
}

void dec2hex(const int dec, char* result)
{
    int target = dec;
    int i=0;

    while(target != 0)
    {
        result[i++] = hex2char(target % 16);
        target = target / 16;
    }
    result[i] = '\0';

    str_reverse(result);
}

int main()
{
    char hex_result[100];
    int input;

    printf("input: ");
    scanf("%d", &input);

    dec2hex(input, hex_result);

    printf("hex: %s\n", hex_result);

    return 0;
}
