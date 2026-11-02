#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
size_t my_strlen(const char* s)
{
	if (*s == '\0')
		return 0;
	else
		return 1 + my_strlen(s + 1);
}
int main()
{
	char arr[] = "abcdef";
	size_t len = my_strlen(arr);
	printf("%zd\n", len);
	return 0;
}