#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	//写入了一组字母
	/*FILE* ptr = fopen("text.txt", "w");
	if (ptr == NULL)
	{
		perror("fopen");
	}
	char ch;
	for (ch = 'a'; ch <= 'g'; ch++)
	{
		fputc(ch, ptr);
	}*/

	FILE* ptr = fopen("text.txt", "r");
	if (ptr == NULL)
	{
		perror("fopen");
	}


	//fessk:根据⽂件指针的位置和偏移量来定位⽂件指针（⽂件内容的光标）
	
	//SEEK_SET	文件的起始位置
	//SEEK_CUR	文件指针当前的位置
	//SEEK_END	文件的末尾
	//语法：int fseek ( FILE * stream, 偏移量, int origin );

	int ch = fgetc(ptr);
	printf("读到第一个字母：%c\n", ch);//读到第一个字母a

	fseek(ptr, 4, SEEK_SET);//读到从起始位置开始数4个偏移量的e
	ch = getc(ptr);
	printf("读到从起始位置开始数4个偏移量的：%c\n", ch);
	//！！！指针读完一个字符会指向下一个字符
	fseek(ptr, 0, SEEK_CUR);//读到当前指针位置的f
	ch = getc(ptr);
	printf("读到当前指针位置的：%c\n", ch);
	fseek(ptr, -4, SEEK_END);//读到从末尾开始左数4个偏移量的d
	ch = getc(ptr);
	printf("读到从末尾开始左数4个偏移量的：%c\n", ch);


	//ftell:返回⽂件指针相对于起始位置的偏移量
	//语法：long int ftell ( FILE * stream );
	fseek(ptr, 0, SEEK_END);//从末尾开始到起始位置的偏移量
	ch = getc(ptr);
	printf("当前文件长度：%d\n", ftell(ptr));


	//rewind：让⽂件指针的位置回到⽂件的起始位置
	//语法：void rewind ( FILE * stream );
	fseek(ptr, 5, SEEK_SET);
	ch = getc(ptr);
	printf("读到从起始位置开始数5个偏移量的：%c\n", ch);
	rewind(ptr);//置回文件起始位置
	ch = fgetc(ptr);
	printf("回到文件的起始位置：%c\n", ch);//读到第一个字母a

	fclose(ptr);
	ptr = NULL;
	return 0;
}