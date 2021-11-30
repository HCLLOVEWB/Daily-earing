//有趣的代码
//代码1  调用0地址处的参数类型为无参，返回类型为void的函数
/*(*(void (*)())0)();//void(*)()是函数指针类型，把一个类型放在括号里是强制类型转换，把0强制类型转换成：void(*)()函数指针类型,所以0就是一个函数的地址
                   //在前面用*解引用，说明调用0地址处的该函数
//代码2
void (*signal(int,void(*)))(int);//不能写成void(*)(int)signal(int,void(*)(int)),因为函数名(signal)必须要靠近*，所以就把(int)放在后面
                                //signal是一个函数声明，signal函数有两个参数，第一个参数是整形(int)，第二个参数是函数指针(void(*)(int))，
                                //signal函数的返回类型是函数指针(void(*)(int)),该函数指针指向的函数的参数是int,返回值类型是void;将函数名(  signal(int,void(*)(int)) )拿走之后剩下的就是函数类型
//简化后的
typedef void(*pfun_t)(int);//pfun_t代表的是函数指针类型
pfun_t signal(int,pfun_t);//这两句代码的意思和上面的等价*/

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
	int(*pa)(int,int)=Add;
	printf("%d\n",(pa)(2,3));//5  可以不解引用调用(将Add传给了pa，pa和Add是一回事)，直接通过pa(Add的地址)去调用Add函数
	printf("%d\n",Add(2,3));//5	
	printf("%d\n",(*pa)(2,3));//5  (*其实是一个摆设，有和没有都可以，但是是有意义的)也可以解引用调用(是指针，解引用才能访问他的对象（理解）)
	//printf("%d\n",*pa(2,3));这种写法是错误的,*p必须要加括号，因为不加括号p就会和后面的括号先结合，p就不是一个指针了
	return 0;
}*/