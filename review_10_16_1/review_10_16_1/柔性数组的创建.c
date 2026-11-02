#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
struct t_yper
{
	int i;
	int arr[0];//柔性数组成员
}A;
int main()
{
	printf("%d", sizeof(A));//输出4
	return 0;
}