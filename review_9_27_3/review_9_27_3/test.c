//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	//将arr1的内容按字节数复制到arr2中。
//	int arr1[] = { 1,2,3,4,5,6,7,8 ,9,10};
//	int arr2[20] = {1,2,3,4,5,6,7,8,9,10};
//	int n = 0;
//	printf("请输入要复制的字节个数：");
//	scanf("%d", &n);//字节数，因为复制的是int型数组，每个元素4个字节，因此输入的数最好能被4整除。
//	//memcpy函数复制是一个字节一个字节复制的。
//	memcpy(arr2,arr1+2,n);
//	int i = 0;
//	for (i = 0; i < 10; i++)//打印复制好的arr2数组。
//	{
//		printf("%d ", arr2[i]);
//	}
//	return 0;
//}