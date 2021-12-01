//函数指针数组

/*#include<stdio.h>
int Add(int x,int y)
{
	return x+y;
}
int Sub(int x,int y)
{
	return x-y;
}
int Mul(int x,int y)
{
	return x*y;
}
int Div(int x,int y)
{
	return x/y;
}
int main()
{
	int* arr[5];//指针数组
	//需要一个数组，这个数组可以存放4个函数的地址，函数指针的数组
	int (*pa)(int,int)=Add;//Sub\Mul\Div
	//int(*pa)(int,int);
	int(*parr[4])(int,int)={Add,Sub,Mul,Div};//函数指针数组；(*parr[4])parr先和{4}结合，所以就是数组，把parr[4]拿出来剩下的就是这个数组存放的四个元素的类型；(*parr[4])(int,int)，取出parr[4],剩下(*)(int,int)
	int i=0;
	for(i=0;i<4;i++)
	{
		printf("%d\n",parr[i](2,3));//5 -1 6 0 parr可以不解引用
	}
	return 0;
}