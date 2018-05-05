#include<stdio.h>

int day_of_year(int year, int month, int day);
void month_day(int year, int yearday, int *pmonth, int *pday);

int
main(void)
{
	int *m,*d;
	int month,day;
	m=&month;
	d=&day;
	printf("4th March 2018 is 2018s %d day\n",day_of_year(2018,3,4));
	month_day(2017,63,m,d);
	printf("63th day of 2017 is %d/%d/2017\n",*d,*m);
	return 0;
}
static char daytab[2][13] = {
	{0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
	{0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
};
/* day_of_year: set day of year from month & day */
int day_of_year(int year, int month, int day)
{
	if(month>12||day>31){
		printf("error: out of bounds\n");
		return -1;
	}
	int i, leap;
	leap = year%4 == 0 && year%100 != 0 || year%400 == 0;
	for (i = 1; i < month; i++){
		day += *(*(daytab+leap)+i);
	}
	return day;
}
/* month_day: set month, day from day of year */
void month_day(int year, int yearday, int *pmonth, int *pday)
{
	if(yearday>366){
		printf("error: out of bounds\n");
		return -1;
	}
	int i, leap;
	leap = year%4 == 0 && year%100 != 0 || year%400 == 0;
	for (i = 1; yearday > *(*(daytab+leap)+i); i++){
		yearday -= *((*(daytab+leap))+i);
	}
	*pmonth = i;
	*pday = yearday;
}
