#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//在X86环境下
//假设结构体的⼤⼩是20个字节
//程序输出的结果是啥？
struct Test
{
int Num;
char* pcName;
short sDate;
char cha[2];
short sBa[4];
 }*p = (struct Test*)0x100000;//0x说明是16进制数
int main()
{
	printf("%p\n", p + 0x1);//结构体加1跳过整个结构体，0x1表示1。这里表示原来0x100000+20，但是要转换成16进制且%p输出：00100014
	printf("%p\n", (unsigned long)p + 0x1);//强转无符号长整型类型，这里不是指针，只是单纯的整型值加1就是加1：00100001
	printf("%p\n", (unsigned int*)p + 0x1);//与上面不同，这里是指针运算，一个整型4个字节：00100004
	return 0;
}