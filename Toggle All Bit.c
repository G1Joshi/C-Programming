#include<stdio.h>

int Toggle(int n) {
    return ~n;
}

int main()
{
    int n, k;
    scanf("%d", &n);
    printf("%d", Toggle(n));
    return 0;
}
