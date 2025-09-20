#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int Day(int year,int month)
{
	int arr[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	int day = arr[month - 1];
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)//≈–∂œ «∑Ò «»ÚƒÍ
	{
		if (month == 2)
		{
			day += 1;
		}
	}
	return day;
}
int main()
{
	int year = 0;
	int month = 0;
	while (scanf("%d %d", &year, &month) != EOF)
	{
		int ret = Day(year, month);
		printf("%d", ret);
	}
	return 0;
}