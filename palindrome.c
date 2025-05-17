#include <stdio.h>
#include <string.h>

#define STR_SZ 100

int main()
{
    char str[STR_SZ];
    int diff = 0;
    int i, last, len;

    scanf("%s", str);
    len = strlen(str);

    last = len - 1;
    for (i=0; i<(len/2); i++, last--)
    {
        if (str[i] != str[last]) // if different
            diff += 1; // then increment
        else
            diff += 0; // just add zero
    }

    printf("%d", (diff > 0)? 0:1);

    return 0;
}
