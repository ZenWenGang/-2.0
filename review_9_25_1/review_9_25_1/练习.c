#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	char* c[] = { "ENTER","NEW","POINT","FIRST" };
	char** cp[] = { c + 3,c + 2,c + 1,c };
	char*** cpp = cp;
	printf("%s\n", **++cpp);//POINT
	printf("%s\n", *-- * ++cpp + 3);//TETR
	printf("%s\n", *cpp[-2] + 3);//ST     只有++跟--才改变cpp的值，这里还是从第9行cpp的位置开始
	printf("%s\n", cpp[-1][-1] + 1);//EW  只有++跟--才改变cpp的值，这里还是从第9行cpp的位置开始
	return 0;
}