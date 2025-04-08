#include <stdio.h>
#include <string.h>

int power(int base, int exp)
{
    int i;
    int product=1;

    for(i=0; i<exp; i++)
        product *= base;

    return product;
}

int a2i(const char ch)
{
    if ('A' <= ch && ch <= 'F')
        return ch - 55;
    else
        return ch - 48;
}

int hex2dec(const char hex[])
{
    int i, j;
    int sum = 0;

    for(i=strlen(hex)-1, j=0; i>=0; i--, j++)
        sum+=a2i(hex[j])*power(16,i);

    return sum;
}

int main()
{
    char input[] = "";

    scanf("%s", &input);

    printf("%d", hex2dec(input));
    return 0;
}
