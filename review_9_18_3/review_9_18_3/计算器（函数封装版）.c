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
//函数里调用其他函数地址
void calc(int(*pr)(int x,int y))                        //使用一个函数来封装，避免冗余
{
	int x = 0;
	int y = 0;
	int z = 0;
	printf("请输入两位要计算的数：");
	scanf("%d %d", &x, &y);
	z = pr(x, y);                                       //调用函数指针数组
	printf("%d\n", z);
}
int main()
{
	int input = 0;
	do
	{
		meun();
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			calc(add);
			break;
		case 2:
			calc(sub);
			break;
		case 3:
			calc(mul);
			break;
		case 4:
			calc(div);
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
