#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//X86环境  ⼩端字节序
int main()
{
	int a[4] = { 1, 2, 3, 4 };
	int* ptr1 = (int*)(&a + 1);//&数组名  逃过整个数组
	int* ptr2 = (int*)((int)a + 1);//整型加1，跳过就是加1，跳过1个字节，取后面4个字节，00 00 00 02
	                                                                              //由于是小端，就取02  输出 0x2 00 00 00
	printf("%x,%#x", ptr1[-1], *ptr2);//加#放便观察
	return 0;
}