#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
typedef struct st_type
{
	int i;
	int* p_a;
}type_a;
int main()
{
	type_a* p = (type_a*)malloc(sizeof(type_a));
	p->i = 100;
	p->p_a = (int*)malloc(p->i * sizeof(int));
	for(int i = 0; i < 100; i++)
	{
			p->p_a[i] = i;
	}

	free(p->p_a);
	p->p_a = NULL;
	free(p);
	p = NULL;
	return 0;
}