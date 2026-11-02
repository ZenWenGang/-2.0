#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的，请编写程序在这样的矩阵中查找某个数字是否存在。

//要求：时间复杂度小于O(N);
int Findnum(int arr[][5], int x, int y, int key)
{
	//x,y要合法
	int i = 0;
	int j = y - 1;     

	while(i<x&&j>=0)                                     //限定范围
	{
		if (arr[i][j] < key)
		{
			i++;
		}
		else if (arr[i][j] > key)
		{
			j--;
		}
		else 
		{
			return 1;
		}
	}
	return 0;
}
int main()
{
	int arr[][5] = { {1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15} };
	int ret = 0;
	ret = Findnum(arr, 5, 5, 15);
	if (ret == 1)
	{
		printf("找到了");
	}
	else 
		printf("没找到");
	return 0;
}