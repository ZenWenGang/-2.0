#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
struct s1
{
	int arr[1000];
	int n;
	double m;
};
void print(const struct s1* tmp)
{
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		printf("%d ", tmp->arr[i]);
		
	}
	printf("%d ", tmp->n);
	printf("%lf\n", tmp->m);
}
int main()
{
	struct s1 s = { {1,2,3,4,5},100,3.14 };
	print(&s);
	return 0;
}