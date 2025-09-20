#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include <stdlib.h>                         //使用时必须包含的头文件
//void qsort (void* base,                   //指针，指向待排数组的第一个元素的地址
//            size_t num,                   //是base指向的待排序数组的元素个数
//            size_t size,                  //base指向的待排序数组的元素大小
//int (*compar)(const void*,const void*));  //函数指针
//


int cmp(const void* p1, const void* p2)
{
	return *(int*)p1 - *(int*)p2;
}
void print(int arr[], int sz)
{
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
int main()
{
	int arr[10] = { 9,8,7,4,5,6,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]),cmp);
	print(arr,sz);
	return 0;
}