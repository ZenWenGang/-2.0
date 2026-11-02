#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//err:
void Test(void)
{
	char* str = (char*)malloc(100);
	strcpy(str, "hello");
	free(str);//释放内存，但没有置空

	if (str != NULL)
	{
		strcpy(str, "world");//非法篡改没有使用权限的内存。
		printf(str);
	}
}

int main()
{
	Test();
	return 0;
}