#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void func()
{
	for (char killer = 'a'; killer <= 'd'; killer++)
	{
		//依次代入abcd进行判断，
		if ((killer  != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3)//利用0/1来判断谁是凶手；
		{
//      代入a：     假 0               假  0            假  0            真  1             0+0+0+1！=3
//      代入b：     真 1               假  0            假  0            真  1             1+0+0+1！=3
//      代入c：     真 1               真  1            假  0            真  1             1+1+0+1==3        为凶手
//      代入d：     真 1               假  0            真  1            假  0             1+0+1+0！=3 
 			printf("凶手是: %c\n", killer);
		}
	}
}
int main()
{
	func();
	return 0;
}