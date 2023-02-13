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

char bin2char(const int bin)
{
    if(bin == 0)
        return '0';
    else
        return '1';
}

void dec2bin(const int dec, char* result)
{
    int target = dec;
    int i=0;

    while(target != 0)
    {
        result[i++] = bin2char(target % 2);
        target = target / 2;
    }
    result[i] = '\0';

    str_reverse(result);
}

int main()
{
    char bin_result[50];
    int input;

    printf("input: ");
    scanf("%d", &input);

    dec2bin(input, bin_result);

    printf("bin: %s\n", bin_result);

    return 0;
}
