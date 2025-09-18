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
	do
	{
		meun();
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("请输入两位要计算的数：");
			scanf("%d %d", &x, &y);
			z = add(x, y);
			printf("%d\n", z);
			break;
		case 2:
			printf("请输入两位要计算的数：");
			scanf("%d %d", &x, &y);
			z = sub(x, y);
			printf("%d\n", z);
			break;
		case 3:
			printf("请输入两位要计算的数：");
			scanf("%d %d", &x, &y);
			z = mul(x, y);
			printf("%d\n", z);
			break;
		case 4:
			printf("请输入两位要计算的数：");
			scanf("%d %d", &x, &y);
			z = div(x, y);
			printf("%d\n", z);
			break;
		case 0:
			printf("退出计算器");
			break;
		default:
			printf("输入错误，请重新输入：");
			break;
		}
	} while (input);
	return 0;
}