//二级指针传参
/*#include<stdio.h>
void test(int** ptr)//用二级指针接收传参的二级指针和一级指针的地址都是可以的
{
	printf("num=%d\n",**ptr);
}
int main()
{
	int n=10;
	int* p=&n;
	int **pp=&p;
	test(pp);
	test(&p);
	int* arr[10];//这是一个数组，数组有十个元素，元素的类型是int*
	test(arr);//int*的地址也是没有问题的
	return 0;
}*/
