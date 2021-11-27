//指针数组传参
/*#include<stdio.h>
void print(int *p,int sz)//指针传参用指针接收
{
	int i=0;
	for(i=0;i<sz;i++)
	{
		printf("%d\n",*(p+i));
	}
}
int main()
{
	int arr[10]={1,2,3,4,5,6,7,8,9};
	int *p=arr;
	int sz=sizeof(arr)/sizeof(arr[0]);
	//一级指针p，传给函数
	print(p,sz);
	return 0;
}*/
//思考：当一个函数的参数部分为一级指针的时候，函数能接收什么参数
//比如：
/*#include<stdio.h>
//test1函数能接收什么参数？
void test1(int *p)//形参是一个一级指针，那么可以传一个变量的地址，或者一个存放地址的一级指针变量
{}
//test2函数能接收什么参数?
void test2(char* p)
{}
int main()
{
	int a=10;
	int* p1=&a;
	test1(&a);//ok
	test1(p1);//ok

	char ch='w';
	char* pc=&ch;
	test2(&ch);//ok
	test2(pc);//ok
	return 0;
}*/