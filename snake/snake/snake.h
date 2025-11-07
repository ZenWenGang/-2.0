#pragma once
#include<windows.h>
#include<stdbool.h>
#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#define POS_X 24
#define POS_Y 5
#define WALL L'□'
#define BODY L'●'
#define FOOD L'☆'
//类型的声明

//蛇的方向
enum DIRECTION
{
	UP = 1,
	DOWN,
	LEFT,
	RIGHT
};

//蛇的状态
enum GAME_STATUS
{
	OK,//正常
	KILL_BY_WALL,//撞墙
	KILL_BY_SELF,//撞到自己
	END_NORMAL//正常退出
};
//蛇身的节点类型
typedef struct SnakeNode
{
	//坐标
	int x;
	int y;
	//指向下一个节点的指针
	struct SnakeNode* next;
}SnakeNode,*pSnakeNode;//*pSnakeNode是指向节点的指针类型

//贪吃蛇
typedef struct Snake
{
	pSnakeNode _pSnake;//指向蛇头的指针
	pSnakeNode _pFood;//指向食物节点
	enum DIRECTION _dir;//蛇的方向
	enum GAME_STATUS _status;//游戏的状态
	int _food_weight;//一个食物的分数
	int _score;//总分数
	int _sleep_time;//休息时间，时间越短，速度越快，时间越长，速度越慢
}Snake, * pSnake;

//函数的声明

//定位光标位置
void SetPos(short x, short y);
//初始化游戏
void GameStart(pSnake ps);
//打印欢迎界面
void WelcomeToGane();
//绘制地图
void CreateMap();
//初始化蛇身
void InitSnake(pSnake ps);
//创建食物
void CreateFood(pSnake ps);
//游戏运行逻辑
void GameRun(pSnake ps);
//蛇走一步的过程
void SnakeMove(pSnake ps);
//判断下一个坐标是不是食物
int pNextIsFood(pSnakeNode pn,pSnake ps);
//下一个位置是食物就吃掉
void EatFood(pSnakeNode pn, pSnake ps);
//下一个位置不是食物
void NotFood(pSnakeNode pn, pSnake ps);
//检测蛇是否撞墙
void KillBywall(pSnake ps);
//检测蛇是否撞到自己
void KillByself(pSnake ps);
//游戏善后工作
void GameEnd(pSnake ps);