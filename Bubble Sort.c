#include<stdio.h>

void bubbleSort(int *arr, int n) {
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++) {
            if(arr[j]>arr[i]) {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);
    bubbleSort(arr, n);
    for(int i=0; i<n; i++)
        printf("%d ", arr[i]);
    return 0;
}
