#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以喝多少汽水?
int main()
{
	int money = 0;
	int sum = 0;
	printf("请输入金额：");
	scanf("%d", &money);
	if (money <= 0)
	{
		printf("余额不足");
	}
	else
	{
		sum = money * 2 - 1;
	}
	printf("总共能喝%d瓶汽水",sum);
	return 0;
}