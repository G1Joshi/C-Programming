#include<stdio.h>

int arrayMin(int *arr, int n) {
    int min=1e9;
    for(int i=0; i<n; i++)
        if(arr[i]<min)
            min=arr[i];
    return min;
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);
    printf("%d", arrayMin(arr, n));
    return 0;
}
