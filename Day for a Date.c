#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dd, mm, yy, year, month, day;
    scanf("%d %d %d",&dd, &mm,&yy);
    if( dd>31 || mm>12)
    {
        exit(0);
    }
    year = yy-1900;
    year = year/4;
    year = year+yy-1900;
    switch(mm)
    {
        case 1:
        case 10:
            month = 1;
            break;
        case 2:
        case 3:
        case 11:
            month = 4;
            break;
        case 7:
        case 4:
            month = 0;
            break;
        case 5:
            month = 2;
            break;
        case 6:
            month = 5;
            break;
        case 8:
            month = 3;
            break;
        case 9:
        case 12:
            month = 6;
            break;
    }
    year = year+month;
    year = year+dd;
    day = year%7;
    switch(day)
    {
        case 0:
            printf("SATURDAY");
            break;
        case 1:
            printf("SUNDAY");
            break;
        case 2:
            printf("MONDAY");
            break;
        case 3:
            printf("TUESDAY");
            break;
        case 4:
            printf("WEDNESDAY");
            break;
        case 5:
            printf("THURSDAY");
            break;
        case 6:
            printf("FRIDAY");
            break;
    }
    return 0;
}
