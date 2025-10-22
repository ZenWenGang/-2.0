#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//##可以把位于它两边的符号合成⼀个符号，它允许宏定义从分离的⽂本⽚段创建标识符。
//##被称为为记号粘合这样的连接必须产⽣⼀个合法的标识符。否则其结果就是未定义的。

// "/"为续行符
//宏定义不同函数:

#define GENERIC_MAX(type)  \
        type type##_max(type x,type y)  \
        {      \
           return x>y?x:y;  \
        }

//第7行的  type type##_max(type x,type y)如果不加##号，会识别成：int type_max(int x,int y)  err
//                                               加了##就是这样：int int_max(int x,int y)

//定义函数
GENERIC_MAX(int);
GENERIC_MAX(float);

int main()
{
	int r1 = int_max(3, 5);
	printf("%d\n", r1);

	float r2 = float_max(3.1f, 4.5f);
	printf("%f\n", r2);
	return 0;
}
