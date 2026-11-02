#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int aa[2][5] = { 10,9,8,7,6,5,4,3,2,1 };
	int* ptr1 = (int*)(&aa + 1);//&aa:表示取整个数组地址。&aa+1:跳过整个二维数组。
	int* ptr2 = (int*)(*(aa + 1));//这里aa为数组首元素地址：aa的第一行的地址，aa+1：第一行往后移一个int*单位，指向5.
	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));//输出结果：1，6
	return 0;
}