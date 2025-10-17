#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
//打开文件data.txt，读取数据
//打开文件data_copy.txt，写数据
//从data.txt中读取数据存放到data_copy.txt文件中，直到文件结束。
//关闭两个文件
int main()
{
	FILE* ptr1 = fopen("data.txt", "r");
	if (ptr1 == NULL)
	{
		perror("Error opening file");
		return 1;
	}

	FILE* ptr2 = fopen("data_copy.txt", "w");
	if (ptr2 == NULL)
	{
		perror("Error opening file");
		return 1;
	}
	//边读边写
	int ch = 0;
	while ((ch =fgetc(ptr1)) != EOF)
	{
		fputc(ch,ptr2);
	}
	//关闭文件
	fclose(ptr1);
	ptr1 = NULL; 
	fclose(ptr2);
	ptr2 = NULL;
	return 0;
}