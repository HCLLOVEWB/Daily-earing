//函数指针--指向函数的指针

/*#include<stdio.h>
int Add(int x,int y)
{
	int z=0;
	z=x+y;
	return z;
}
int main()
{
	int a=10;
	int b=20;
	//printf("%d\n",Add(a,b));
	//&函数名和函数名都是函数的地址
	printf("%p\n",&Add);//Add函数的地址
	printf("%p\n",Add);//&函数名和函数名都是函数的地址
	int (*pa)(int,int)=Add;//函数指针，后面是圆括号的是函数指针，函数里面只要指明参数的类型就行，参数写不写都可以
	int (*pa)(int x,int y)=Add;
	//int *pa(int int)=Add 不能写成这样，*p必须要加上括号，不然的话P先和后面的圆括号结合，那就是函数了；如果*p加上括号，p就先和*结合，就是指针了
	printf("%d\n",(*pa)(2,3));//5  通过函数指针找到函数并调用函数实现2和3的相加
	return 0;
	}*/
/*#include<stdio.h>
void Print(char*str)
{
	printf("%s\n",str);
}
int main()
{
	void (*p)(char*)=Print;
	(*p)("hcl love wb");
	return 0;
}*/