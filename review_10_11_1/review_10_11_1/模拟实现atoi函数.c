#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<ctype.h>
#include<limits.h>
int my_atoi(const char* str)
{
	assert(str != NULL);
	if (*str=='\0')
	{
		return 0;
	}
    //isspace返回值不为0，代表是空格。
	while (isspace(*str))
	{
		str++;
	}
	//判断正负号
	int flg = 1;
	if (*str == '+')
	{
		flg = 1;
		str++;
	}
	else if (*str == '-')
	{
		flg = -1;
		str++;
	}
    //判断是不是数字字符
	long long ret = 0;
	while (*str != '\0')
	{
		if (isdigit(*str))
		{
			ret = ret*10+(*str - '0')*flg;
			//输出int的最大值和最小值
			if (ret>INT_MAX)
			{
				ret = INT_MAX;
			}
			if (ret <INT_MIN)
			{
				ret = INT_MIN;
			}
		}
		else
		{
			return (int)ret;
		}
		str++;
	}
	return (int)ret;
}
int main()
{
	int ret = my_atoi("2111111111");
	printf("%d", ret);
	return 0;
}