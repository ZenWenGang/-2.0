#define _CRT_SECURE_NO_WARNINGS 1
#include<locale.h>
#include"snake.h"
//完成的是游戏的测试逻辑
void test()
{
	int ch = 0;
	do
	{
		system("cls");//清屏
		//创建贪吃蛇
		Snake snake = { 0 };

		//初始化游戏
		GameStart(&snake);
		//运行游戏
		GameRun(&snake);
		//结束
		GameEnd(&snake);
		SetPos(20, 15);
		printf("再来一局吗？(Y/N):");
		ch = getchar();
		while (getchar() != '\n');
	} while (ch == 'Y' || ch == 'y');
	SetPos(0, 27);
}

int main()
{
	//设置适配本地环境
	setlocale(LC_ALL, "");
	srand((unsigned int)time(NULL));
	test();
	return 0;
}
//遇到的问题：1.sleep的s是大写S;
//            2.cur=cur->next写成cur->next=cur;
//纠正以上问题后还报错重启电脑就能解决