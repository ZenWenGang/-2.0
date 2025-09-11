#define _CRT_SECURE_NO_WARNINGS
//输入一段字符串，如果是大写字母则转换为小写字母；如果是小写字母则转换为大写字母；若是其他、它字符则不变。
#include<stdio.h>
#include<string.h>
int main()
{
	char str[20];
	gets(str);
	int i = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		else if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
	}
	puts(str);
	return 0;
}