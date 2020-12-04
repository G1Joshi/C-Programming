#include<stdio.h>

float arrayAvg(int *arr, int n) {
    float sum=0;
    for(int i=0; i<n; i++)
        sum+=arr[i];
    return sum/n;
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);
    printf("%0.2f", arrayAvg(arr, n));
    return 0;
}
