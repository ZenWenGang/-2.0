#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//1.利用‘&’来取出奇偶位
//2.取出奇偶位后分别左移，右移1位来交换位置
//3.最后用‘|’交换后的两位数得到结果
#define SWAPBIT(n) (((n)&0x55555555)<<1)|(((n)&0xaaaaaaaa)>>1)
int main()
{
	printf("%d", SWAPBIT(13));
	return 0;
}