#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void swap(int *x, int* y)
{
	int team;
	team = *x;
	*x = *y;
	*y = team;
}
int main()
{
	int a = 10;
	int b = 15;
	printf("交换前a=%d b=%d", a, b);
    swap(&a, &b);
	printf("交换后a=%d b=%d", a,b);
	return 0;
}