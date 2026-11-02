#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main() 
{
    int a, b;
    int count = 0;
    while (scanf("%d %d", &a, &b))
    { 
        int tmp = a ^ b;
        while (tmp)
        {
            tmp = tmp & (tmp - 1);
            count++;
        }
        printf("%d\n", count);
    }
    return 0;
}

