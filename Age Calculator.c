//Age Calculator
//by Jeevan Joshi

#include<stdio.h>
#include<stdlib.h>

int curDate, curMonth, curYear;
int birDate, birMonth, birYear;
int calDate, calMonth, calYear;

void Age(int curDate, int curMonth, int curYear, int birDate, int birMonth, int birYear);

int main() 
{
printf("Enter current date in DD MM YYYY : ");
scanf("%d %d %d", &curDate, &curMonth, &curYear);
printf(" %d/%d/%d", curDate, curMonth, curYear);
printf("\nEnter birth date in DD MM YYYY : ");
scanf("%d %d %d", &birDate, &birMonth, &birYear);
printf(" %d/%d/%d", birDate, birMonth, birYear);

Age(curDate, curMonth, curYear, birDate, birMonth, birYear);

printf("\nPresent age is %d Years, %d Months and %d Days", calYear, calMonth, calDate);

return 0;
}

void Age(int curDate, int curMonth, int curYear, int birDate, int birMonth, int birYear)
{
int month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

if(birDate > curDate)
{
curDate = curDate + month[birMonth - 1];
curMonth = curMonth - 1;
}

if(birMonth > curMonth)
{
curYear = curYear - 1;
curMonth = curMonth + 12;
}

if(birYear > curYear)
{
printf("\nAge cannot be negative");
exit(0);
}

calDate = curDate - birDate;
calMonth = curMonth - birMonth;
calYear = curYear - birYear;
}