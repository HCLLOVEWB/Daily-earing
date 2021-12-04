//回调函数
//回调函数就是一个通过函数指针调用的函数。如果你把函数的指针（地址)作为参数传递给另一个函数，当这个指针被用来调用其所指向的函数时，我们就说这是回调函数。回调函数不是由该函数的实现方直接调用，而是在特定的事件或条件发生时由另外的一方调用的，用于对该事件或条件进行响应。

/*#include<stdio.h>
void print(char *str)
{
	printf("hehe:%s",str);
}
void test(void (*p)(char*))
{
	printf("test\n");          //test
	p("bit");//(*p)("bit"	   //hehe:bit(打印出来的结果)
}                //通过p去调用print函数，print函数被称为回调函数；这种机制，被称为回调函数机制
int main()
{
	test(print);
	return 0;
}*/


//由于在case中存在多条语句重复出现，所以采取回调函数的方法解决冗余的问题
/*
#include<stdio.h>
void menu()
{
	printf("***********************\n");
	printf("****    1   Add    ****\n");
	printf("****    2   Sub    ****\n");
	printf("****    3   Mul    ****\n");
	printf("****    4   Div    ****\n");
	printf("****    0   Exit   ****\n");
	printf("***********************\n");
}
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
int Div( int x,int y)
{
	return x/y;
}
void Calc(int(*pf)(int,int))
{
	int x=0;
	int y=0;
	printf("请输入两个操作数:");
	scanf("%d%d",&x,&y);
	printf("%d\n",pf(x,y));
}
int main()
{
	int input=0;
	int x=0;
	int y=0;
	do
	{
		menu();
		printf("请选择:\n");
		scanf("%d",&input);
		switch(input)
		{
		case 1:
			Calc(Add);//传入Calc函数，下面冗余的语句就可以不写了(因为除了Add,Sub,Mul,Div不一样，其他的都一样，所以就可以选择调用Calc函数来解决冗余的问题)
			//printf("请输入两个操作数:");
			//scanf("%d%d",&x,&y);
			//printf("%d\n",Add(x,y));
			break;
		case 2:
			Calc(Sub);
			//printf("请输入两个操作数:");
			//scanf("%d%d",&x,&y);
			//printf("%d\n",Sub(x,y));
			break;
		case 3:
			Calc(Mul);
			//printf("请输入两个操作数:");
			//scanf("%d%d",&x,&y);
			//printf("%d\n",Mul(x,y));
			break;
		case 4:
			Calc(Div);
			//printf("请输入两个操作数:");
			//scanf("%d%d",&x,&y);
			//printf("%d\n",Div(x,y));
			break;
		case 0:
			printf("退出\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	}while(input);
	return 0;
}*/
