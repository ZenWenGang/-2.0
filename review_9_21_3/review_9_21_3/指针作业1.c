#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a[5] = { 5, 4, 3, 2, 1 };
	int* ptr = (int*)(&a + 1);//&a：整个数组地址加1；
	printf("%d,%d", *(a + 1), *(ptr - 1));//a+1：数组首元素加1（a[0+1]）
	return 0;
}