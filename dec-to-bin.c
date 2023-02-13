#include <stdio.h>
#include <stdlib.h>

#define STR_LEN 31

int result_len = 0;
char result[STR_LEN];

int power(const int base, int n)
{
    int result = 1;

    for(int i=0; i<n; i++)
        result *= base;
    return result;
}

void get_bin(int n)
{
    int i=1;

    result[0] = '\0';

    while (n != 0)
    {
        result[i++] = (n % 2) + '0';
        n = n / 2;
    }

    result_len = i - 1;
}

void print_bin()
{
    int i;
    for(i=result_len; i>0; i--)
        printf("%c", result[i]);
    puts("");

}

int main()
{
    print_bin(get_bin(8));

    return 0;
}
