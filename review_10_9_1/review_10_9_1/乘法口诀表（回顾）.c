#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i = 0;
	int j = 0;
	int mut = 0;
	for (i = 1; i <= 9; i++)
	{
		
		for (j = 1; j <= 9; j++)
		{
			mut = i * j;
			if(i>=j)
			printf("%d*%d=%d  ", j, i, mut);
		}
		printf("\n");
	}
	return 0;
}