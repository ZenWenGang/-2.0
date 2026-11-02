#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//err：
void GetMemory1(char* p)
{
	p = (char*)malloc(100);
}
void Test1(void)
{
	char* str = NULL;
	GetMemory1(str);
	strcpy(str, "hello world");
	printf(str);
}
//更正：
void GetMemory2(char** p)//接收二级指针
{
	*p = (char*)malloc(100);//*p指向str2
}
void Test2(void)
{
	char* str2 = NULL;
	GetMemory2(&str2);//取地址
	strcpy(str2, "hello world");
	printf(str2);
	free(str2);//释放内存
	str2 = NULL;//指针置空
}

int main()
{
	Test2();
	return 0;
}