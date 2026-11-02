#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void FindNum(int arr[], int len, int* p1, int* p2)
{
	//1.先找出两个不同数字异或的结果
	int sum = 0;
	for (int i = 0; i < len; i++)
	{
		sum ^= arr[i];
	}
	//2.找到sum中二进制为1的某一位k
	int k = 0;
	for (int i = 0; i < 32; i++)
	{
		if (((sum >> i) & 1) != 0)
		{
			k = i;
			break;
		}
	}
	//3.遍历数组，把每个数据第k位上是1的分到一个组进行异或
	//最终的值存到p1或p2中，各组再进行异或
	*p1 = *p2 = 0;
	for (int i = 0; i < len; i++)
	{
		if (((arr[i] >> k) & 1) != 0)
		{
			*p1 ^= arr[i];          //k位为1的一组
		}
		else
		{
			*p2 ^= arr[i];          //k位为0的一组
		}
	}
}
int main()
{
	int arr[] = {1,2,3,4,5,1,2,3,4,6 };
	int len = sizeof(arr) / sizeof(arr[0]);
	int p1 = 0;
	int p2 = 0;
	FindNum(arr, len,&p1,&p2);
	printf("%d %d", p1, p2);
	return 0;
}