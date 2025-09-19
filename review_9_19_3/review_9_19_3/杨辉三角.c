#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int Tringal(int arr[][4], int n)
{
	for (int i = 0; i < n; i++)            //n为要输出的行数
	{
		for (int j = 0; j <= i; j++)
		{
			if (i == j || j == 0)          //特殊情况
			{
				arr[i][j] = 1;             
			}
			else
			{
				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1]; 
			}
		}
	}
}
void print(int arr[][4], int n)                //输出三角
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}
int main()
{
	int arr[4][4] = { 0 };
	Tringal(arr,4 );
	print(arr, 4);            
	return 0;
}