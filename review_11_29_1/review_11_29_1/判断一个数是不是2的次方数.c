#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
struct Stu
{
	char name[15];//名字
	int age;//年龄
};
void print_stu(struct Stu s)
{
	printf("%s %d\n", s.name, s.age);
}
void set_stu(struct Stu* ps)
{
	strcpy(ps->name, "李四");
    ps->age = 28;
}
int main()
{
	struct Stu s = { "张三", 20 };
	print_stu(s);
	set_stu(&s);
	print_stu(s);
	return 0;
}