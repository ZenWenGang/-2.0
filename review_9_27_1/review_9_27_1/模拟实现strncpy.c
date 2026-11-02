#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<string.h>
char* my_strncpy(char* str1,char* str2,size_t num)
{
	assert(str1 != NULL);
	assert(str2 != NULL);
	char* ret = str1;
	size_t len2 = strlen(str2);
	size_t len1 = strlen(str1);
	if (len2 < len1)
	{
		for (int i = 0; i < len2; i++)
		{
			str1[i] = str2[i];
		}
		str1[num] = 0;
	}
	else
	{
		for (int i = 0; i < num; i++)
		{
			str1[i] = str2[i];
		}
	}
	return ret;
}
int main()
{
	char arr1[] = "abcdef";
	char arr2[] = "xxxxxxxx";
	size_t n = 0;
	printf("请输入要复制的字符个数：");
	scanf("%d", &n);
    my_strncpy(arr2, arr1,n);
	printf("%s",arr2);
	return 0;
}