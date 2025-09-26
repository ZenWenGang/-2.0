#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
char* my_strstr(const char* str1, const char* str2)
{
	const char* s1 = NULL;
	const char* s2 = NULL;
	const char* cr =str1;//cr当作锚点
	if (*str2 == '\0')//当str2为空字符串的情况
	{
		return (char*)str1;//返回str1
	}
	while (*cr)//当锚点为'\0'时，跳出循环
	{
		s1 = cr;
		s2 = str2;
		while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
		{
			return (char*)cr;//找到了，返回起始地址
		}
			cr++;//如果字符不匹配，锚点后移
	}
	return NULL;//没找到
}
int main()
{
	char arr1[] = "abbbcde";
	char arr2[] = "cd";
	char* ret = my_strstr(arr1, arr2);
	if (ret == NULL)
		printf("没找到");
	else
		printf("%s", ret);
	return 0;
}