#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//err:
//返回栈空间地址的问题。
char* GetMemory1(void)//栈区
{
	char p[] = "hello world";
	return p;//返回了局部变量，p出去该函数会变成野指针。
}
void Test1(void)
{
	char* str1 = NULL;
	str1 = GetMemory1();//str1=p；
	printf(str1);
}
//原因：等GetMemory1函数返回后，使用str1指针去访问p数组，就是非法访问。
// 因为p数组的内存已经还给了操作系统。str1是野指针。

int main()
{
	Test1();
	return 0;
}