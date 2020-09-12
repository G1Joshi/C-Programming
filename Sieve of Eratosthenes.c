#include <stdio.h>
#include <math.h>
#define N 100

int main()
{
    int arr[N] = {0};
    for (int i = 2; i <= sqrt(N); i++)
    {
        if(!arr[i])
        {
            for (int j = i * i; j <= N; j+=i)
            {
                arr[j] = 1;
            }
        }
    }
    for (int i = 2; i <= N; i++)
    {
        if (!arr[i])
        {
            printf("%d ", i);
        }
    }
    return 0;
}
