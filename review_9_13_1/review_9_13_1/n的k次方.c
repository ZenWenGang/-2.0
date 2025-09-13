#include<stdio.h>
int Pow(int n, int k)
{
	if (k == 1)
	{
		return n;
	}
	else
	{
		return n * Pow(n, k - 1);
	}
}
int main()
{
	int n;
	int k;
	scanf("%d %d", &n, &k);
	printf("%d", Pow(n, k));
	return 0;
}