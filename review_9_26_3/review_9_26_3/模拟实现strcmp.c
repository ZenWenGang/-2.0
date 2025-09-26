#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
int my_strcmp(const char* dest, const char* stc)
{
	assert(dest && stc);
	while (*dest==*stc)
	{
		if (*dest == '\0')//结束的情况
		{
			return 0;
		}
		dest++;
		stc++;
	}
	return *dest - *stc;//dest大于stc就返回大于0的数，否则返回小于0的数。
}
int main()
{
	char arr1[20] = "abcdef";
	char arr2 [20] = "abcd";
	int ret = my_strcmp(arr1, arr2);
	printf("%d\n", ret);
	return 0;
}