#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//只能找出最小的一个，后续再优化能全部排序出来。
struct stu {
	char mane[20];
	int age;
};
void cmp_mane(const void*p1,const void*p2) 
{
	return strcmp(((struct stu*)p1)->mane, ((struct stu*)p2)->mane);
}
void print(struct stu* arr)
{
	printf("%s %d", arr->mane, arr->age);
}
int main()
{
	struct stu arr[3] = { {"zhangsan",18},{"lisi",19},{"wanwu",20} };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_mane);
	print(&arr);
	return 0;
}