#include <stdio.h>

int main()
{
    int i,j,num;
    int a=1;
    printf("Enter number of rows:\n");
    scanf("%d",&num);
    for(i=1; i<=num; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("%d ", a++);
        }
        printf("\n");
    }
    return 0;
}
