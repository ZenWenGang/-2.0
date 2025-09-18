#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int round(char* str, char* str2)
{
	int len = strlen(str);
	for (int i = 0; i < len; i++)
	{
		char tmp = str[0];
		int j = 0;
		for (j = 0; j < len - 1; j++)
		{
			str[j] = str[j + 1];
		}
		str[j] = tmp;
		if (strcmp(str, str2) == 0)
		{
			return 1;
		}
	}
	return 0;
}
int main()
{
	char str1[] = "aabcd";
	char* str2 = "abcda";
	int ret = round(str1, str2);
	if (ret == 1)
	{
		printf("是旋转后的结果！\n");
	}
	else
		printf("不是旋转后的结果");
	return 0;
}