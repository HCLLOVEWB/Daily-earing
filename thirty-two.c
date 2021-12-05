//指向函数指针数组的指针
//指向函数指针数组的指针是一个指针 指针指向一个数组，数组的元素都是函数指针;

/*#include<stdio.h>
int Add(int x,int y)
{
	return x+y;
}
int main()
{
	int arr[10]={0};
	int(*p)[10]=&arr;//取出数组的地址

	int(*pf)(int,int)=Add;//pf是一个函数指针
	int(*pfArr[4])(int,int);//pfArr是一个数组---函数指针的数组
	int(*(*ppfArr)[4])(int,int)=&pfArr;//(*ppfArr)[4]；(*ppfArr)说明是一个指针，(*ppfArr)[4]说明这个指针指向的是一个数组，这个数组有四个元素；把(*ppfArr)[4]拿出去剩下的就是数组元素的类型,说明数组每个元素类型是int(*)(int,int)(是函数指针)
	//ppfArr是一个指向函数指针数组的指针 (只需要将函数指针数组的pfArr拿出来加上*，变为（*pfArr），再放回原位，就变成了指向函数指针数组的指针)
	return 0;
}*/

