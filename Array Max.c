#include<stdio.h>

int arrayMax(int *arr, int n) {
    int max=0;
    for(int i=0; i<n; i++)
        if(arr[i]>max)
            max=arr[i];
    return max;
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);
    printf("%d", arrayMax(arr, n));
    return 0;
}
