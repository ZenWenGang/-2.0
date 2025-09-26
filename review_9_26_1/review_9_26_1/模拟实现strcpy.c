#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
char * my_strcpy(char* bast, char* stc)
{
	//断言，防止传输出错
	assert(bast != NULL);
	assert(stc != NULL);
	char * ret = bast;//把返回目标函数的地址存起来
	while (*bast++ = *stc++)//将元素搬运
		;
	return ret;//返回目标函数的起始空间地址
}
int main()
{
	char arr1[] = "hello,world";
	char arr2[20] = "xxxxxxxxxxxxxxxxx";
	my_strcpy(arr2, arr1);
	printf("%s",arr2);
	return 0;
}