#include <stdio.h>

void arrayinsert(int *arr, int *n, int p, int data) {
    int i;
    (*n)++;
    for (i = *n-1; i >= p; i--)
        arr[i] = arr[i - 1];
    arr[i] = data;
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    int p, data;
    scanf("%d %d", &p, &data);
    arrayinsert(arr, &n, p, data);
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}