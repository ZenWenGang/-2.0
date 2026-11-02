#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void print(int m)
{
	if (m > 9)
	{
		print(m / 10);
	}
        printf("%d ", m % 10);
}
int main()
{
	printf("请输入要打印的整数：");
	int n=0;
	scanf("%d", &n);
	print(n);
	return 0;
}