#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	//新建一个文件并存入数字10000
	int n = 10000;
	FILE* pr = fopen("文件操作1.txt", "wb");
	fwrite(&n, 4, 1, pr);//将10000这个数字4个字节1次性以二进制的形式写到pr里
	fclose(pr);
	pr = NULL;
	return 0;
}
//源文件-添加-现有项-文件操作1.txt-右键打开方式-二进制编辑器；就能看到写入的10000以16进制小端存储存入的数据。