#include<stdio.h>
//求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字，
#define _CRT_SECURE_NO_WARNINGS
//例如：2 + 22 + 222 + 2222 + 22222
int main()
{
	int Sn = 0;
	int temp = 0;
	int a =0;
	printf("请输入a：");
	scanf("%d", &a);
	int i = 0;
	for (i = 1; i <= 5; i++)
	{
		temp = temp * 10 + a;
		Sn += temp;
	}
	printf("%d", Sn);
	return 0;
}
