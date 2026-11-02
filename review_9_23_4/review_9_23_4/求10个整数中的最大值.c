#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>
int main() {
	int i = 0;
	int max = 0;
	int arr[10] = { 0 };

	printf("请输入10个整数：");

	for (i = 0; i <= 9; i++)

	{
		scanf_s("%d", &arr[i]);
	}
	max = arr[1];
	for (i = 1; i <= 9; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];

		}
	}
	printf("最大值%d", max);



	return 0;
}