#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	char arr[] = {'a','b','c','d'};
	int len = sizeof(arr) / sizeof(arr[0]);
	for (int i = len - 1; i >= 0; i--)
	{
		printf("%c", arr[i]);
	}
	return 0;
}