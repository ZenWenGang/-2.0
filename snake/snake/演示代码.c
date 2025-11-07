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
//	getchar();
//	return 0;
//}


//控制台定位坐标

//int main()
//{
//	COORD pos = { 0,0 };//使用该函数必须包含windows头文件
//
//	return 0;
//}

//int main()
//{
//	//获得标准输出设备的句柄
//	HANDLE houtput = NULL;
//	houtput =GetStdHandle(STD_OUTPUT_HANDLE);
//	//定义一个光标信息的结构体
//	CONSOLE_CURSOR_INFO cursor_info = { 0 ,};//光标信息
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
//	system("pause");
//	return 0;
//}

//封装一个设置光标位置的函数
//void set_pos(short x, short y)
//{
////获得标准输出设备的句柄
//	HANDLE houtput = NULL;
//	houtput = GetStdHandle(STD_OUTPUT_HANDLE);
//	//定位光标的位置
//	COORD pos = { x,y };
//	SetConsoleCursorPosition(houtput, pos); 
//}

//int main()
//{
//	set_pos(10, 20);
//	printf("hehe\n");
//
//	set_pos(10, 10);
//	printf("hehe\n");
//	
//	getchar();
//	return 0;
//}

//#include<locale.h>
//int main()
//{
//    setlocale(LC_ALL, "");//本地模式
//	wchar_t wc1 = L'比';
//	wchar_t wc2 = L'特';
//
//	wprintf(L"%lc\n",wc1 );
//	wprintf(L"%lc\n", wc2);
//	wprintf(L"%lc\n", L'★');
//	wprintf(L"%lc\n", L'●');
//	return 0;
//}