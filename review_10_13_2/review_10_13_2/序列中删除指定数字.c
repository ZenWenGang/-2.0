#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int arr[50] = { 0 };
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	int dle;
	scanf("%d", &dle);
	int j = 0;
	int i = 0;
	for (; i < n; i++)
	{
		if (arr[i] != dle)
		{
			//如果要找的数跟数组里的不相等就一起向后移动
			arr[j] = arr[i];
			j++;
		}
	}
	//输出筛选好的j下标数组
	for (int k = 0; k < j; k++)
	{
		printf("%d ", arr[k]);
	}
	return 0;
}