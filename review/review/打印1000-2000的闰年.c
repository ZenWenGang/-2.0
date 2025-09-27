#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
void* my_memmove(void* str1, const void* str2, size_t num)
{
	assert(str1 && str2);
	void* ret = str1;
	if (str1 < str2)
	{
		while (num--)
		{
			*(char*)str1 = *(char*)str2;
			str1 = (char*)str1 + 1;
			str2 = (char*)str2 + 1;
		}
	}
	else
	{
		while (num--)
		{
			*((char*)str1 + num) = *((char*)str2);
		}
	}
	return ret;
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	my_memmove(arr, arr + 2, 20);
	for (int i = 0; i < 10; i++)
	{
		printf("%d", arr[i]);
	}
	return 0;
}