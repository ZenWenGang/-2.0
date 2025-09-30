#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	char a[999];//char的值：-128----127
	int i = 0;
	for (i = 0; i < 999; i++)
	{
		a[i] = -1 - i;//-1 ，-2 ， -3 ，，，-127 ，-128 ，1，2，3，，，，，125，126，127，0
	}                      //127-(-128)=255
	printf("%d", strlen(a));//统计的是\0（ASCII值是0）之前的字符个数。
	return 0;
}