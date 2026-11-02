#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
//1.对空指针的解引用操作
void text1()
{
	int *p = (int*)malloc(INT_MAX/4);
	*p= 20;//如果p的值是NULL，就会有问题
	free(p);
	p = NULL;
}
//更正：
void text1()
{
	int* p = (int*)malloc(INT_MAX / 4);
	if (p == NULL)//加入判断；或者换成：assert（p）；防止空指针
	{
		perror("malloc");
		return 1;
	}
	*p = 20;
	free(p);
	p = NULL;
}

//2.对动态开辟空间的越界访问
void test2()
{
	int i = 0;
	int* p = (int*)malloc(10 * sizeof(int));
	if (p==NULL)
	{
		exit(EXIT_FAILURE);
	}
	for (i = 0; i <= 10; i++)//已经超过10个元素
	{
		*(p + i) = i;//当i是10的时候越界访问
	}
	free(p);
	p = NULL;
}

//3.对⾮动态开辟内存使⽤free释放
void test3()
{
	int a = 10;
	int *p =&a;
	free(p);//free只能释放动态申请的空间
	p = NULL;
}

//4.使⽤free释放⼀块动态开辟内存的⼀部分
void test4()
{
	int* p = (int*)malloc(100);
	if (p == NULL)
	{
		return 1;
	}
	for (int i = 0; i < 5; i++)
	{
		*p = i + 1;
		p++;
	}
	free(p);//p不再指向起始位置
	p = NULL;
}

//5.对同⼀块动态内存多次释放
void test5()
{
	int* p = (int*)malloc(100);
	free(p);
	free(p);//重复释放

}
//更正：
void test5()
{
	int* p = (int*)malloc(100);
	free(p);
	p = NULL;//将p置空
	free(p);//释放空指针还是空
}

//6.动态内存忘记释放（内存泄漏）
void test6()
{
	int* p = (int*)malloc(100);
	if (NULL != p)
	{
		*p = 20;
	}
	//更正：这里要加free（p）;来释放内存
}
int main()
{
	test6();
	while (1);
}
//其实malloc/calloc/realloc申请的内存，如果不想使用的时候可以用free释放
//如果没有用free来释放，当程序运行结束的时候，也会由操作系统回收的！
//一般malloc跟free是成对出现的
//尽量做到
//1.谁（函数）申请的空间谁释放
//2.如果不能释放，要告诉使用的人，记得释放

//malloc跟free成对出现的例外：
void test7()
{
	int* p = (int*)malloc(100);
	int n = 3;
	if (n > 0)
	{
		return;//这里提前返回了，后面的free（p）没有执行
	}

	free(p);
	p = NULL;
}
int main()
{
	test7();
	while (1);
}