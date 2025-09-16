#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int Strlen(const char* str)
{
	const char* p = str;
	while (*str != '\0')
	{
		str++;
	}
	return str - p;
}
int main()
{
	int ret = 0;
	char arr[] = "abcdef";
	ret = Strlen(arr);
	printf("%d", ret);
	return 0;
}