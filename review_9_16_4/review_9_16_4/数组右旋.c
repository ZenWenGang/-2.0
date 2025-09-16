#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
void reserve(char arr[],int k,int sz)
{
	
	for (int i = 0; i < k; i++)
	{
        char tmp = arr[sz - 1];
		for (int j = sz-2; j>=0; j--)
		{
			arr[j + 1] = arr[j];
		}
		arr[0] = tmp;
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