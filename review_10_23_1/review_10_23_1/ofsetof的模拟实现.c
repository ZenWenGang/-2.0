#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define My_ofsetof(s,m) ((size_t)&(((s*)0)->m))//取到结构体起始地址到m的偏移量再强制类型转换无符号整型size_t。

struct S
{
	char a;
	double b;
};

int main()
{
	printf("%d", My_ofsetof(struct S, b));
	return 0;
}