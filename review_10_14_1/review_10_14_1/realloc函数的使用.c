#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int* p = (int*)malloc(5 * sizeof(int));
	if (p == NULL)
	{
		perror("malloc");
		return 1;
	}
	
	for (int i = 0; i < 5; i++)
	{
		*(p + i) = i+1;
	}

	int* ptr = (int*)realloc(p, 40);
	if (ptr == NULL)
	{
		perror("realloc");
		return 1;
	}
	else 
	{
      p = ptr;
	  
	}int i = 0;
	  for (i = 5; i < 10; i++)
	  {
		  *(p + i) = i + 1;
	  }
	  for (i = 0; i < 10; i++)
	  {
		  printf("%d ", *(p+i));
	  }
	free(p);
	p = NULL;
	return 0;
}