#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
char* my_strcat(char* dest, const char* src)
{
	//断言，防止传输出错
	assert(dest &&src);
	
	char* ret = dest;//把返回目标函数的地址存起来
	while (*dest!= '\0')
		dest++;
	while (*dest++=*src++)
		;
	return ret;//返回目标函数的起始空间地址
}
int main()
{
	char arr1[20] = "hello ";
	char arr2[20] = "world !";
	my_strcat(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}