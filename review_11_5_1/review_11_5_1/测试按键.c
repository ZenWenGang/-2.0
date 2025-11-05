#define _CRT_SECURE_NO_WARNINGS 1
#define KEY_PRESS(VK)  ( (GetAsyncKeyState(VK) & 0x1) ? 1 : 0 )
#include <stdio.h>
#include <windows.h>
int main()
{
    while (1)
    {
        if (KEY_PRESS(0x30))
        {
            printf("0\n");
        }
        else if (KEY_PRESS(0x31))
        {
            printf("1\n");
        }
        else if (KEY_PRESS(0x32))
        {
            printf("2\n");
        }
        else if (KEY_PRESS(0x33))
        {
            printf("3\n");
        }
        else if (KEY_PRESS(0x34))
        {
            printf("4\n");
        }
        else if (KEY_PRESS(0x35))
        {
            printf("5\n");
        }
        else if (KEY_PRESS(0x36))
        {
            printf("6\n");
        }
        else if (KEY_PRESS(0x37))
        {
            printf("7\n");
        }
        else if (KEY_PRESS(0x38))
        {
            printf("8\n");
        }
        else if (KEY_PRESS(0x39))
        {
            printf("9\n");
        }
    }
    return 0;
}