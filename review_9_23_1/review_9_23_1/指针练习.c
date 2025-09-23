#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	char arr[] = "abcdef";
	printf("%d\n", strlen(arr));//输出数组长度 6
	printf("%d\n", strlen(arr + 0));//首元素地址+0还是首元素地址，往后数还有6个字符
	printf("%d\n", strlen(*arr));//a的ascll码  err
	printf("%d\n", strlen(arr[1]));//b的ascll码  err
	printf("%d\n", strlen(&arr));//首元素地址，输出6
	printf("%d\n", strlen(&arr + 1));//随机值
	printf("%d\n", strlen(&arr[0] + 1));//  5
	return 0;
}