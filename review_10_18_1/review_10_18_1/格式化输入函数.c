#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
struct S
{
	char name[20];
	int age;
	float score;
};
int main()
{
	struct S s = { "张三",20,60.5f };
	//把s的数据放到文件中
	FILE* ptr = fopen("test.txt", "w");
	if (ptr == NULL)
	{
		perror("fopen");
		return 1;
	}
	fprintf(ptr,"%s %d %f", s.name, s.age, s.score);//以文本形式写进去
	fclose(ptr);
	ptr = NULL;
	return 0;
}