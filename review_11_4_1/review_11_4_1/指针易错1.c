#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
    char str1[] = "hello bit.";
    char str2[] = "hello bit.";
    char* str3 = "hello bit.";
    char* str4 = "hello bit.";
    //比较地址
    //错误原因：误以为是比较内容。
    if (str1 == str2)
        printf("str1 and str2 are same\n");
    else
        printf("str1 and str2 are not same\n");

    if (str3 == str4)
        printf("str3 and str4 are same\n");
    else
        printf("str3 and str4 are not same\n");

    return 0;
}
//str1和str2是两个数组，数组的操作方式是将右边常量字符串的内容拷贝进来，所以他们是两个空间，只是内容相同，所以str1 != str2。
// 而str3和str4是两个指针，编译器在处理的时候，会将相同的常量字符串做成同一个地址，所以，str3和str4指向的是同一个常量字符串，所以str3 == str4，