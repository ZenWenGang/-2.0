#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>

void* my_memcpy(void* str1, const void* str2, size_t num)
{
	//这里定义的str1是“粘贴”的目标函数，str2是被复制函数。

	assert(str1 && str2);//防止数组为空
	void* ret = str1;//str1的起始地址先传给ret。
	while (num--)//因为复制是一个字节一个字节复制的，每复制一次就-1直到传入的字节数复制完才退出循环。
	{
		*(char*)str1 = *(char*)str2;//因为每次循环要移动一个字节，所以用char*比较合适。
		str1 = (char*)str1 + 1;
		str2 = (char*)str2 + 1;
	}
	return ret;//返回str1起始位置地址
}

int main()
{
	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
	my_memcpy(arr1+2, arr1, 20);
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr1[i]);
	}
	return 0;
}