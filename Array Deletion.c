#include <stdio.h>

void arraydelete(int *arr, int *n, int p)
{
    int i;
    for (i = p-1; i < *(n); i++)
        arr[i] = arr[i + 1];
    (*n)--;
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    int p;
    scanf("%d", &p);
    arraydelete(arr, &n, p);
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}