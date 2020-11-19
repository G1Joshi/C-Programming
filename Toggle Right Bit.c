#include<stdio.h>

int ToggleRightBit(int n) {
    return n & (n-1);
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d",ToggleRightBit(n));
    return 0;
}
