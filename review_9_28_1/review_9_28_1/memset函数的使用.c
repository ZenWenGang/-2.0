#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>//必须包含memset的头文件
//语法：
// void * memset ( void * ptr, int value, size_t num );//！！num输入的是字节数
int main()
{
	char arr[] = "abcdef";
	memset(arr, 'x', 5);//改成5个‘x'，单位是字节。
	printf("%s", arr);
	return 0;
}