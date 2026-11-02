#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int n = 9;
	float* pfloat = (float*)&n;
		printf("n的值为：%d\n",n);
		printf("pfloat的值为：%f\n", *pfloat);
		*pfloat = 9.0;
		printf("num的值为：%d\n", n);
		printf("pfloat的值为： % f\n", *pfloat);
	return 0;
}