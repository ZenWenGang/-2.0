#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<string.h>
char* my_strncat(char* str1, char* str2,size_t num)
{
	assert(str1 && str2);
	char* ret = str1;
	int len2=strlen(str2);
	while (*str1!='\0')
		str1++;
	if (len2 > num)
	{
		for (int i =0; i < num; i++)
		{
			str1[i] = str2[i];
		}
	}
	else
		while (*str1++ = *str2++)
			;
	return ret;
}
int main()
{
	char arr1[20] = "hello ";
	char arr2[20] = "world !";
	size_t n= 0;
	printf("请输入要连接的字符个数：");
	scanf("%d", &n);
	my_strncat(arr1, arr2,n);
	printf("%s\n", arr1);
	return 0;
}