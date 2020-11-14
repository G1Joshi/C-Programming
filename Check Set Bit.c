#include<stdio.h>

bool setBit(int n, int k) {
    return n & (1<<k-1);
}

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    printf("%d",setBit(n, k));
    return 0;
}
