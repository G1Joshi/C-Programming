#include<stdio.h>

int linearSearch(int *arr, int n, int x) {
    for(int i=0; i<n; i++)
        if(arr[i]==x)
            return i;
    return -1;
}

int main()
{
    int n, x;
    scanf("%d %d", &n, &x);
    int arr[n];
    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);
    printf("%d", linearSearch(arr, n, x));
    return 0;
}
