#include <stdio.h>

int binarysearch(int* arr, int n, int data)
{
    int l = 0, r = n - 1;
    int m;
    while (l <= r)
    {
        m = (l + r) / 2;
        if (arr[m] > data)
            r = m - 1;
        else if (arr[m] < data)
            l = m + 1;
        else
            return m + 1;
    }
    return -1;
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    int data;
    scanf("%d", &data);
    printf("%d", binarysearch(arr, n, data));
    return 0;
}