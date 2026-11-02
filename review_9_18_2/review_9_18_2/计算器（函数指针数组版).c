#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int add(int x, int y)
{
	return x + y;
}
int sub(int x, int y)
{
	return x - y;
}
int mul(int x, int y)
{
	return x * y;
}
int div(int x, int y)
{
	return x / y;
}
void meun()
{
	printf("**************************\n");
	printf("*******1.add   2.sub******\n");
	printf("*******3.mul   4.div******\n");
	printf("**********0.EXIT**********\n");
	printf("**************************\n");
}
int main()
{
	int x = 0;
	int y = 0;
	int input = 0;
	int z = 0;
    int (*pr[5])(int , int ) = { 0,add,sub,mul,div };
	do
	{
		meun();
		printf("请输入：");
		scanf("%d", &input);
		if (input >= 1 && input <= 4)
		{
			printf("请输入两位要计算的数：");
			scanf("%d %d", &x, &y);
			z = pr[input](x, y);
			printf("%d\n", z);
		}
		else if (input == 0)
		{
			printf("退出计算器");
		}
		else
			printf("输入错误");
	} while (input);
	return 0;
}
