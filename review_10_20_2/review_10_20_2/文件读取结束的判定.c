#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//例子：
// 
//fgetc:
//如果读取正常，返回读取到字符的ASCII码值
//如果读取过程中遇到文件末尾，或发生错误，就返回EOF

//fgets:
//如果读取正常，返回的是存储取到的字符串的字符数组的地址
//如果读取过程中遇到文件末尾，或发生错误，就返回NULL

int main()
{
  /*  char ch;
	for (ch = 'a'; ch <= 'g'; ch++)
	{
		fputc(ch, ptr);
	}*/
	FILE* ptr = fopen("text.txt", "r");//这里是读文件的方式打开，如果下面进行写文件操作就会报错
	if (ptr == NULL)
	{
		perror("fopen");
		return 1;
	}
	//读取
	int ch = 0;
	while ((ch = fgetc(ptr)) != EOF)
	{
		printf("%c\n", ch);
	}

	////写文件（err）
	/*char ch = 0;
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		fputc(ch, ptr);
	}*/
	
	//判断原因
	//fgetc判断是否为EOF
	//fgets判断返回值是否为NULL

	if (feof(ptr))//返回非0，为真
	{
		printf("遇到文件末尾，正常结束");
	}
	else if (ferror(ptr))
	{
		perror("fgetc");
	}
	fclose(ptr);
	ptr = NULL;
	return 0;
}