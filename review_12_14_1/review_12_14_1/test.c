#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main() {
    int num = 42;
    int* p = &num; // 将 num 的地址赋值给指针 p

    printf("变量 num 的值: %d\n", num);
    printf("变量 num 的地址: %p\n", &num); // 使用 %p 打印地址
    printf("指针p存储的地址: %p\n", p);
    printf("指针p存储的地址: %p\n", (int*)p);//跟上一句是一样的
    return 0;
}