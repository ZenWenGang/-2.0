#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>//使用枚举所需包含的头文件
void menu()
{
	printf("**************************\n");
	printf("******1.add    2.sub******\n");
	printf("******3.mul    4.div******\n");
	printf("*********0.exit **********\n");
	printf("**************************\n");
}

void calc(int(*pr)(int x, int y))                        //使用一个函数来封装，避免冗余
{
	int x = 0;
	int y = 0;
	int z = 0;
	printf("请输入两位要计算的数：");
	scanf("%d %d", &x, &y);
	z = pr(x, y);                                       //调用函数指针数组
	printf("%d\n", z);
}
int Add(int x,int y)
{
	return x+y;
}
int Sub(int x,int y)
{
	return x-y;
}
int Mul(int x,int y)
{
	return x*y;
}
int Div(int x,int y)
{
	return x/y;
}
enum option
{
	EXIT,//0
	ADD,//1
	SUB,//2
	MUL,//3
	DIV//4
};
int main()
{
	menu();
	int input = 0;
	printf("请选择：");
	scanf("%d", &input);
	switch (input)
	{
	case ADD:calc(Add);
		break;
	case SUB:calc(Sub);
		break;
	case MUL:calc(Mul);
		break;
	case DIV:calc(Div);
		break;
	case EXIT:
		break;
	default:
		printf("输入错误");
		break;
	}
	return 0;
}