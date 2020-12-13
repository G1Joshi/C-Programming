#include <stdio.h>

int main()
{
    char str[100], i = 0, length;
    gets(str);
    while(str[i] != '\0')
        i++;
    length = i;
    printf("%d", length);
    return 0;
}
