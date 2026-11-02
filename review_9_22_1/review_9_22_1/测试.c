#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int arr[10] = { 0 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int* p = arr;

	for (i = 0; i < sz; i++)//输入10个元素给数组arr
	{
		scanf("%d", p + i);//scanf("%d", arr+i);//也可以这样写
	}
	
	for (i = 0; i < sz; i++)//输出数组arr中的10个元素
	{
		printf("%d ", p[i]);
	}
	return 0;
}