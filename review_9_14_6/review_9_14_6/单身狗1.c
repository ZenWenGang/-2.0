#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int arr[] = { 1,1,2,2,3,3,5,6,4,4 };
	int len = sizeof (arr)/ sizeof(arr[0]);
	int sum = arr[0];
	int SUN = arr[0];
	for (int i = 1; i < len; i++)
	{
		sum ^= arr[i];//利用异或：相同为0。
		SUN &= arr[i];
	}
	printf("%d %d", sum,SUN);
	return 0;
}