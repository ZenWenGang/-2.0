#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int my_sys()
{
	//利用联合体共用存储空间的特点；优先访问低地址的c。
	union un
	{
		char c;
		int i;
	}u;
	u.i = 1;
	return u.c;
	
}
int main()
{
	int ret = my_sys();
	if (ret == 1)
		printf("小端");
	else
		printf("大端");
	return 0;
}