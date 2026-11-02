#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	//二进制写入文件
	/*int arr[] = { 1,2,3,4,5 };
	FILE* ptr = fopen("text.txt", "wb");
	if (ptr == NULL)
	{
		perror("fopen");
		return 1;
	}
	int sz = sizeof(arr) / sizeof(arr[0]);
	fwrite(arr, sizeof(arr[0]),sz, ptr);*/

	//把二进制从文件中输出
	int arr[5] = { 0 };
	FILE* ptr = fopen("text.txt", "rb");
	fread(arr, sizeof(arr[0]), 5, ptr);
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]);
	}
	fclose(ptr);
	ptr = NULL;
	return 0;
}