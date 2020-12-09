#include<stdio.h>

bool isPositive(int n) {
    return n>0;
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", isPositive(n));
    return 0;
}
