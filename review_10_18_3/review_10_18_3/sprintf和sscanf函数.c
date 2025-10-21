#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//sscanf--在字符串中读取格式化的数据
//sprintf--把格式化的数据转化成字符串
struct S
{
	char name[20];
	int age;
	float score;
};
int main()
{
	//将结构体s的内容以字符串形式打印出来
	struct S s = { "张三",20,89.5 };
	char buf[200] = {0};
	sprintf(buf, "%s %d %f", s.name, s.age, s.score);
	printf("以字符串的形式：%s\n", buf);

	//将字符串里的内容写到结构体t中
	struct S t = { 0 };
    sscanf(buf, "%s %d %f", t.name, &(t.age), &(t.score));
	printf("按照格式打印：%s %d %f\n", t.name,t.age,t.score);
	return 0;
}