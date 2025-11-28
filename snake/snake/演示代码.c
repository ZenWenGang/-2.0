#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#include<stdbool.h>
//system函数可以执行系统命令
//int main() 
//{
//	//设置控制台相关属性
//	system("mode con cols=100 lines=30");
//	system("title 贪吃蛇");
//	//这里能够停下来让我们观察控制台
//	return 0;
//}


////控制台定位坐标
//int main()
//{
//	system("mode con cols=100 lines=30");
//	system("title 贪吃蛇");
//	COORD pos = { 10, 5 };
//	HANDLE hOutput = NULL;
//	//获取标准输出的句柄(⽤来标识不同设备的数值)
//	hOutput = GetStdHandle(STD_OUTPUT_HANDLE);
//	//设置标准输出上光标的位置为pos
//	SetConsoleCursorPosition(hOutput, pos);
//	getchar();
//	return 0;
//}

//int main()
//{
//	system("mode con cols=100 lines=30");
//	system("title 贪吃蛇");
//	//获得标准输出设备的句柄
//	HANDLE houtput = NULL;
//	houtput =GetStdHandle(STD_OUTPUT_HANDLE);
//	//定义一个光标信息的结构体
//	CONSOLE_CURSOR_INFO cursor_info = { 0 ,0};//光标信息
//	//获取和houtput句炳相关的控制台上的信息，存放在cursor_info中
//	GetConsoleCursorInfo(houtput, &cursor_info);//获取相应控制台光标的信息
//	//修改光标百分比
//	//cursor_info.dwSize = 50;
//
//	//修改光标是否隐藏
//	cursor_info.bVisible = false;//使用false要包含头文件stdbool.h
//	//设置和houtput句柄相关的控制台上的光标信息
//	SetConsoleCursorInfo(houtput, &cursor_info);
//
//	
//	return 0;
//}

//封装一个设置光标位置的函数
//void set_pos(short x, short y)
//{
//    //获得标准输出设备的句柄
//	HANDLE houtput = NULL;
//	houtput = GetStdHandle(STD_OUTPUT_HANDLE);
//	//定位光标的位置
//	COORD pos = { x,y };
//	SetConsoleCursorPosition(houtput, pos); 
//}
//
//int main()
//{
//	system("mode con cols=100 lines=30");
//	system("title 贪吃蛇");
//	set_pos(10, 20);
//	printf("hehe\n");
//
//	set_pos(10, 10);
//	printf("hehe\n");
//	
//	getchar();
//	return 0;
//}

#include<locale.h>
//int main()
//{
//	char* ret = setlocale(LC_ALL, NULL);
//	printf("%s\n", ret);
//
//	ret = setlocale(LC_ALL, "");//本地化
//	printf("%s", ret);
//	return 0;
//}
//int main()
//{
//	setlocale(LC_ALL, "C");
//
//    setlocale(LC_ALL, "");//本地模式
//	wchar_t wc1 = L'你';
//	wchar_t wc2 = L'好';
//	
//	printf("%c%c\n",'a','b');
//	wprintf(L"%lc\n",wc1 );
//	wprintf(L"%lc\n", wc2);
//	wprintf(L"%lc\n", L'★');
//	wprintf(L"%lc\n", L'●');
//	return 0;
//}

//#define KEY_PRESS(VK)  ( (GetAsyncKeyState(VK) & 0x1) ? 1 : 0 )
//int main()
//{
//    while (1)
//    {
//        if (KEY_PRESS(0x30))
//        {
//            printf("0\n");
//        }
//        else if (KEY_PRESS(0x31))
//        {
//            printf("1\n");
//        }
//        else if (KEY_PRESS(0x32))
//        {
//            printf("2\n");
//        }
//        else if (KEY_PRESS(0x33))
//        {
//            printf("3\n");
//        }
//        else if (KEY_PRESS(0x34))
//        {
//            printf("4\n");
//        }
//        else if (KEY_PRESS(0x35))
//        {
//            printf("5\n");
//        }
//        else if (KEY_PRESS(0x36))
//        {
//            printf("6\n");
//        }
//        else if (KEY_PRESS(0x37))
//        {
//            printf("7\n");
//        }
//        else if (KEY_PRESS(0x38))
//        {
//            printf("8\n");
//        }
//        else if (KEY_PRESS(0x39))
//        {
//            printf("9\n");
//        }
//    }
//    return 0;
//}