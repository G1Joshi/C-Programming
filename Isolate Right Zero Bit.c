#include<stdio.h>

int IsolateRightBit(int n) {
    return ~n & (n+1);
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d",IsolateRightBit(n));
    return 0;
}
