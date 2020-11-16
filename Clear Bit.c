#include<stdio.h>

int clearBit(int n, int k) {
    return n & ~(1<<k-1);
}

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    printf("%d",clearBit(n, k));
    return 0;
}
