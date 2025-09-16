#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void funcction(int* p, int sz)
{
	int* left = p;
	int* right = p + sz - 1;
	while (left < right)
	{
		while (left < right && *left % 2 != 0)
		{
			left++;
		}
		while (left < right && *right % 2 == 0)
		{
			right--;
		}
		int tmp = *left;
		*left = *right;
		*right = tmp;
	}
}

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9 };

	int sz = sizeof(arr) / sizeof(arr[0]);
	funcction(arr, sz);
	for (int i = 0; i < sz; i++)
	{
		printf("%d", arr[i]);
	}
	return 0;
}