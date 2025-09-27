#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
void* my_memcpy(void* str1, const void* str2, size_t num)
{
	assert(str1 && str2);
	void* ret = str1;
	while (num--)
	{
		*(char*)str1 = *(char*)str2;//因为每次循环要移动一个字节，所以用char*比较合适。
		str1 = (char*)str1 + 1;
		str2 = (char*)str2 + 1;
	}
	return ret;//返回起始位置地址
}
int main()
{
	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
	int arr2[20] = {0};
	int n = 0;
	printf("请输入要复制的字节个数：");
	scanf("%d", &n);
	my_memcpy(arr2, arr1, n);
	int i = 0;
	for (i = 0; i < 20; i++)
	{
		printf("%d ", arr2[i]);
	}
	return 0;
}