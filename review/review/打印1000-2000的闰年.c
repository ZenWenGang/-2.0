#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
 struct stu {
        char* name; // 指针成员
        int age;
    };
int main()
{
    struct stu s;
    s.name = (char*)malloc(50 * sizeof(char)); // 为name分配内存
    strcpy(s.name, "ZhangSan");
    // ... 使用 s
    free(s.name); // 释放为name分配的内存
}