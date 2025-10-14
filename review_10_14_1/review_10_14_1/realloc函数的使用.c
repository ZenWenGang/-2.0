#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int* p = (int*)malloc(5 * sizeof(int));//20个字节
	if (p == NULL)
	{
		perror("malloc");
		return 1;
	}
	for (int i = 0; i < 5; i++)
	{
		*(p + i) = i + 1;
	}
	//调整为40个字节
	int *ptr=realloc(p, 40);//防止调整失败后丢失p的地址，用ptr接收而不用p接收。
	if (ptr == NULL)
	{
		perror("realloc");//调整失败就退出
		return 1;
	}
	else
	{
		p = ptr;//调整成功就使用内存
		int i = 0;
		for (i = 5; i < 10; i++)//从5开始给后面的指针赋值
		{
			*(p + i) = i + 1;
		}
		for (i = 0; i < 10; i++)//输出10个数
		{
			printf("%d ", *(p + i));
		}
		free(p);//释放内存
		p = NULL;//指针置空
	}
	return 0;
}