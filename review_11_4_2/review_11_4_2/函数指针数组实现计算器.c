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
void menu()
{
	printf("*************************\n");
	printf("  1:add           2:sub  \n");
	printf("  3:mul           4:div  \n");
	printf("          0:exit         \n");
	printf("*************************\n");
}
int main()
{
	int x, y;
	int input = 0;
	int ret = 0;
	int(*p[])(int x,int y) = {0,add,sub,mul,div};
	do
	{
		menu();
		printf("请选择操作：\n");
		scanf("%d", &input);
		if (input >= 1 && input <= 4)
		{
			printf("请输入两位操作数：\n");
			scanf("%d %d", &x, &y);
			ret = p[input](x, y);
			printf("计算结果为：%d\n", ret);
		}
		else if (input == 0)
		{
			printf("退出计算器\n");
		}
		else
		{
			printf("输入错误，请重新输入：\n");
		}
	} while (input);
	return 0;
}