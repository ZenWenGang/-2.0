#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void print(int(*arr)[5], int a, int b)
{
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < b; j++)
		{
			printf("%d ", *(*arr + i) + j);
		}
		printf("\n");
	}
}
int main()
{
	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
	print(arr, 3,5);
	return 0;
}