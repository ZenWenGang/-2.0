#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int chek_sys()
{
	int i = 1;
	return *(char*)&i;//强转char*取i的地址
}
//千万不要对整型i强转char
//如果强制类型转换，不管大端还是小端总是拿到的是它的第一位（最右边）。
int main()
{
	int ret = chek_sys();
	if (ret == 1)
		printf("小端");
	else
		printf("大端");
	return 0;
}