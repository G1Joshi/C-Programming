#include<stdio.h>

int DivideBy2(int n, int k) {
    return n>>k;
}

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    printf("%d", DivideBy2(n, k));
    return 0;
}
