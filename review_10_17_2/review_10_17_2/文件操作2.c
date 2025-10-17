#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	//1.写文件
	/*FILE* ptr = fopen("text.txt", "w");
	if (ptr == NULL)
	{
		perror("ptr");
		return 1;
	}

	//写入26个字母
	char ch;
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		fputc(ch,ptr);
	

	//2.读文件
	/*FILE* ptr = fopen("text.txt", "r");
	if (ptr == NULL)
	{
		perror("fopen");
		return 1;
	}
	int ch;
	while ((ch = fgetc(ptr)) != EOF)
	{
		printf("%c", ch);
	}*/

	//3.写入一个字符串
	/*FILE* ptr = fopen("text.txt", "w");
	if (ptr == NULL)
	{
		perror("fopen");
		return 1;
	}
	fputs("hello whord\n", ptr);
	fputs("hello whord\n", ptr);*/

	//4.读字符串
	FILE* ptr = fopen("text.txt", "r");
	if (ptr == NULL)
	{
		perror("fopen");
		return 1;
	}
	char arr[20] = "xxxxxxxxxxxxxxxxxxxx";//创建一个字符串数组
	fgets(arr,20, ptr);
	printf("%s\n", arr);
	printf("%s\n", arr);
	//关闭文件
	fclose(ptr);
	ptr = NULL;
	return 0;
}