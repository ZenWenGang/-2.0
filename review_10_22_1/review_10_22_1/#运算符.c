#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//#运算符将宏的⼀个参数转换为字符串字⾯量。它仅允许出现在带参数的宏的替换列表中。
//#运算符所执⾏的操作可以理解为”字符串化“

#define Print(n,format)  printf("the value of "#n" is "format"\n",n)//

int main()
{
	int a = 1;
	Print(a,"%d");
	//printf("the value of a is %d\n", a);

	int b = 30;
	Print(b,"%d");
	//printf("the value of b is %d\n", b);

	float c = 6.66f;
	Print(c,"%f");
	//printf("the value of c is %f\n", c);
	return 0;
}