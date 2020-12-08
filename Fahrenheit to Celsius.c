#include<stdio.h>

float f2c(int f) {
    return (f-32)/1.8;
}

int main()
{
    int f;
    scanf("%d", &f);
    printf("%0.2f", f2c(f));
    return 0;
}
