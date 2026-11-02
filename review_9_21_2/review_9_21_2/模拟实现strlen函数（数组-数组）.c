#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int my_strlen(char* p)
{
	char* star = p;
	while (*star != '\0')
		star++;
	return star-p;
}
int main()
{
	char arr[] = "abcdef";
	char * p = &arr;
	printf("%d",my_strlen(p) );
	return 0;
}