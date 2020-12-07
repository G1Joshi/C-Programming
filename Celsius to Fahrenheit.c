#include<stdio.h>

float c2f(int c) {
    return c*1.8+32;
}

int main()
{
    int c;
    scanf("%d", &c);
    printf("%0.2f", c2f(c));
    return 0;
}
