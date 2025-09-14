#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//'^':异或运算相同为0，相异为1。
int main()
{
	int a = 4;
	int b = 5;
	printf("交换前a=%d b=%d\n", a, b);
	a = a ^ b;
	b = a ^ b;//a^b^b=a
	a = a ^ b;//a^b^a=b
	printf("交换后a=%d b=%d", a, b);
	return 0;
}