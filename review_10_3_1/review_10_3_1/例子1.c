#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//浮点数取数值尽量不要取一些极端例子
//存入内存总是差一点接近目标数值
int main()
{
	float a = 0.4549;
	printf("%.10f", a);
	return 0;
}