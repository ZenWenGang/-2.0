#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	float f = 5.5f;
	//二进制：101.1
	//1.011*2^2
	//S=0,M=1.011,E=2
	//E+127=129（加上中间值127）
	//float型的二进制：0 10000001 01100000000000000000000
	//                 S  E（129）          M
	// 转换为十六进制： 40 B0 00 00
	return 0;
}