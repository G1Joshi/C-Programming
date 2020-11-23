#include<stdio.h>

int MultiplyBy2(int n, int k) {
    return n<<k;
}

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    printf("%d", MultiplyBy2(n, k));
    return 0;
}
