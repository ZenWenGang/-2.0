#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
typedef struct stu
{
	char name[20];
	char sxe[5];
	int id;
	int age;
}s;
int main()
{
	struct stu s ={"ÀîËÄ","ÄĞ",2025001,22};
	printf("%s,%s,%d,%d", s.name, s.sxe, s.id, s.age);
	return 0;
}