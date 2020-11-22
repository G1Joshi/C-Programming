#include<stdio.h>

bool PowerOf2(int n) {
    return !(n & (n-1));
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", PowerOf2(n));
    return 0;
}
