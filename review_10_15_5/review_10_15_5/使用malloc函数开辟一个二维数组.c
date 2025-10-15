#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	//创建二维数组
	int** arr = (int**)malloc(3 * sizeof(int*));

	for (int i = 0; i < 3; i++)
	{
		arr[i] = (int*)malloc(5 * sizeof(int));
	}
	//赋值
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			arr[i][j] = 1;
		}
	}
	//打印
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	free(arr);
	arr = NULL;
	return 0;
}