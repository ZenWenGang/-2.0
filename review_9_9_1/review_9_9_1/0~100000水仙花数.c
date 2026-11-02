
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
    int num, n, sum, temp, digit;

    for (num = 0; num <= 100000; num++)
    {
        temp = num;
        sum = 0;

        // 计算当前数字的位数 n
        n = 0;
        int t = temp;
        if (t == 0) n = 1;  // 0 特殊情况
        while (t > 0)
        {
            n++;
            t /= 10;
        }

        // 计算各位 n 次方之和
        t = temp;
        while (t > 0)
        {
            digit = t % 10;
            sum += (int)pow(digit, n);
            t /= 10;
        }
        if (temp == 0) sum = 0; // 特殊情况 0^1 = 0

        // 判断是否为水仙花数
        if (sum == num)
        {
            printf("%d\n", num);
        }
    }

    return 0;
}

