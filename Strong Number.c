#include <stdio.h>

int main()
{
    int n, fact;
    scanf("%d", &n);
    int sum = 0, num = n;
    while (n)
    {
        int i = 1, fact = 1;
        int rem = n % 10;
        while (i <= rem)
        {
            fact = fact * i;
            i++;
        }
        sum = sum + fact;
        n = n / 10;
    }
    if (sum == num)
        printf("%d is a strong number\n", num);
    else
        printf("%d is not a strong number\n", num);
    return 0;
}
