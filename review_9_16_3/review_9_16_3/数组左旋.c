#define _CRT_SECURE_NO_WARNINGS 1
#include <assert.h>
#include<stdio.h>
void reserve(char arr[], int k, int sz)
{
	for (int i = 0; i < k; i++)
	{
		char tmp = arr[0];                //先把首个元素存到一个地方
		for (int j = 0; j < sz - 1; j++)  //再把每个数组元素依次往前移动
		{
			arr[j] = arr[j + 1];
		}
		arr[sz - 1] = tmp;                //将原本首个元素放到最后
	}
}
int main()
{
	char arr[] = { 'a','b','c','d','e' };
	int k = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	printf("请输入要旋转的次数：");
	scanf("%d", &k);
	assert(k < 5);                          //这里防止旋转次数超过数组元素个数
	reserve(arr, k, sz);
	for (int i = 0; i < sz; i++)
	{
		printf("%c", arr[i]);
	}
	return 0;
}