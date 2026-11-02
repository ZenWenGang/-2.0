#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int cmp(const void* a, const void* b)//元素比较
{
	return *(int*)a - *(int*)b;//结果只有小于0，等于0，大于0
}
void Swap(char* p1, char* p2, size_t width)//元素交换
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *p1;
		*p1 = *p2;
		*p2 = tmp;
		//交换后都前进一位
		p1++;
		p2++;
	}
}
void bubble_sort(void* bast,size_t sz,size_t width,int (*cmp)(const void*p1,const void*p2))//冒泡排序
{
	for (int i = 0; i < sz - 1; i++)
	{
		for (int j = 0; j < sz - 1 - i; j++)
		{
			if (cmp((char*)bast + j * width, (char*)bast + (j + 1) * width) > 0)
			{
				Swap((char*)bast + j * width, (char*)bast + (j + 1) * width, width);
			}
		}
	}
}
int print_arr(int arr[],int  sz)//打印数组
{
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}
void test()
{
	int arr[] = { 9,8,7,5,6,4,2,3,1,0 };//定义一个数组
	int sz = sizeof(arr) / sizeof(arr[0]);//数组大小
	bubble_sort(arr, sz, sizeof(arr[0]), cmp);
	print_arr(arr, sz);
}
int main()
{
	test();
	return 0;
}