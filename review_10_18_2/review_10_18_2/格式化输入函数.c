#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
struct S
{
	char name[20];
	int age;
	float score;
};
//int main()
//{
//	struct S s = { "李四",22,88.8 };
//	FILE* p = fopen("text.txt", "w");
//	if (p == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	fprintf(p, "%s %d %f", s.name, s.age, s.score);
//	fclose(p);
//	p = NULL;
//	return 0;
//}

int main()
{
	//将上面创建好的文件内容读到s中并打印到屏幕上
	struct S s = { 0 };
	FILE* p = fopen("text.txt", "r");
	if (p == NULL)
	{
		perror("fopen");
		return 1;
	}
	fscanf(p, "%s %d %f", s.name, &(s.age), &(s.score));
	printf("%s %d %f", s.name, s.age, s.score);
	fclose(p);
	p = NULL;
	return 0;
}