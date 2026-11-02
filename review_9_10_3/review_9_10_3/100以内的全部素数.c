#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//素数：只能被1和它本身整除的整数

int main()
{
	int sum=0;
	int i,j;
	for (i = 2; i <=100; i++)
	{
		int prim = 1;
		for (j=2;j<i;j++)
		{
			if (i % j == 0)//如果不是素数就跳出本次循环
			{
				prim = 0;
				break;
			}
			
		}
		if (prim == 1)//如果是素数就输出到屏幕
			{
				printf("%d\n", i);
				sum++;
			}
		
	}
	printf("素数总数有%d个",sum);
	return 0;
}