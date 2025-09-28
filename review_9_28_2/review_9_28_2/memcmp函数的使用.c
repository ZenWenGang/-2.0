#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>//必须包含头文件
//语法：
//int memcmp ( const void * ptr1, const void * ptr2, size_t num );
//⽐较从ptr1和ptr2指针指向的位置开始，向后的num个字节
int main()
{
	int arr1[] = { 1,2,3,4,5,6,7,8 };
	int arr2[] = { 1,2,3,4,5,8,9 };
	int n = 20;//要输入的字节数
	int ret=memcmp(arr1, arr2,n);//函数会根据数组比较的结果返回大于0，小于0或者等于0的数。
	if (ret < 0)
	{
		printf("arr1小于arr2\n");
	}
	else if (ret > 0)
	{
		printf("arr1大于arr2\n");
	}
	else
		printf("arr1等于arr2\n");
	return 0;
}