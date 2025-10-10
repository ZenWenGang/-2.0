#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
struct s1 
{
	double a;
	char i;
	int b;
};
struct s2
{
	char m;//1 8 8                                                              //1
	struct s1;//调用结构体（16个字节）；取对其数时，取其结构体成员最大对其数8   //16
	int n;//4 8 8                                                               //4
};
int main()
{
	printf("%d", sizeof(struct s2));
	return 0;
}