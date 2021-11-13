//奇奇怪怪的知识点又增加了(define的小知识点)
/*#include<stdio.h>
#define Mina(a,b)((a>b)?(a):(b-a))
#define Minb(a,b)((a>b)?(a):(b)-(a))
int main()
{
	int x,y;
	x=Mina(2+4,9);
	y=Minb(2+4,9);
	printf("((a>b)?(a):(b-a))%d \n",x);
	printf("((a>b)?(a):(b)-(a))%d\n",y);
	return 0;
}*/
//奇奇怪怪的知识点（注释代码）
/*#include<stdio.h>
int main()
{
#if 0   
	int a;  //这种注释方式更加安全
	int b;
	int c;
#endif
	return 0;
}*/
//输出1到n的阶乘值(自己瞎想的办法)
/*#include<stdio.h>
int main()
{
	void fun(int n);
	int i,n;
	printf("请输入你想知道的阶乘数，我们会输出这个数之前（包括这个数）的所有数字的阶乘数\n");
	scanf("%d",&n);
	fun(n);
	return 0;
}
void fun(int n)
{
	int i;
	int j=1;
	for(i=1;i<=n;i++)
	{
		j=j*i;
		printf("%d!=%d\n",i,j);
	}
}*/
//输出1到n的阶乘值(运用了static的静态局部变量)
/*#include<stdio.h>
int main()
{
	int fun(int n);
	int i,n;
	printf("请输入你想知道的阶乘是哪个数，我们会输出这个数字之前(包括这个数)的所有数字的阶乘值\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d!=%d\n",i,fun(i));
	}
	return 0;
}
int fun(int n)
{
	static int i=1;
	i=i*n;//必须要对i进行赋值，i的值才可以发生变化；如果直接写成return(i*n),i的值就没有发生变化，一直都是1
	return (i);
}*/
//用选择法对数组中十个整数按由小到大排序(老公教的方法)
/*#include<stdio.h>
int main()
{
	void bi(int a[],int len);
	int a[10];
	int i,len=0;
	printf("请输入十个整数\n");
	for(i=0;i<sizeof(a)/sizeof(a[0]);i++)
	{
		scanf("%d",&a[i]);
		len++;
	}
	printf("这个数组长度为%d\n",len);
	bi(a,len);
	printf("排序后的数组为\n");
	for(i=0;i<len;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
void bi(int a[],int len)
{
	int j,k,z,tem;
	for(j=0;j<len-1;j++)
	{
		for(k=j+1;k<len;k++)
		{
			if(a[k]<a[j])
			{
			tem=a[k];
			a[k]=a[j];
			a[j]=tem;}
		}
	}
}*/
//用选择法对数组中十个整数按由小到大排序(书上的方法)
/*#include<stdio.h>
int main()
{
	void bi(int a[],int len);
	int a[10];
	int i,len=0;
	printf("请输入十个整数\n");
	for(i=0;i<sizeof(a)/sizeof(a[0]);i++)
	{
		scanf("%d",&a[i]);
		len++;
	}
	printf("这个数组长度为%d\n",len);
	bi(a,len);
	printf("排序后的数组为\n");
	for(i=0;i<len;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
void bi(int a[],int len)
{
	int j,k,z,tem;
	for(j=0;j<len-1;j++)
	{
		z=j;
		for(k=j+1;k<len;k++)
		{
			if(a[k]<a[z])
				z=k;
			tem=a[z];
			a[z]=a[j];
			a[j]=tem;}
	}
}*/
//用选择法对数组中十个整数按由小到大排序（这个是错误的，出来的结果是将十个整数倒着输出一遍）
/*#include<stdio.h>
int main()
{
	void bi(int a[],int len);
	int a[10];
	int i,len=0;
	printf("请输入十个整数\n");
	for(i=0;i<sizeof(a)/sizeof(a[0]);i++)
	{
		scanf("%d",&a[i]);
		len++;
	}
	printf("这个数组长度为%d\n",len);
	bi(a,len);
	printf("排序后的数组为\n");
	for(i=0;i<len;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
void bi(int a[],int len)
{
	int j,k,z,tem;
	for(j=0;j<len-1;j++)
	{
		z=j;
		for(k=j+1;k<len;k++)
		{
			if(a[k]<a[z])
				z=k;
			tem=a[j];
			a[j]=a[k];
			a[k]=tem;
		}
	}
}*/
//实现一个函数，打印乘法口诀表，乘法口诀表的行数和列数都可以自己指定，如输入12，则输出12*12的乘法口诀表
/*#include<stdio.h>
void print_table(int m)
{
	int i,j;
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d*%d=%-3d ",j,i,i*j);//d表示输出整数，3表示输出的数字占3个字符的位置。-号表示对齐方式。是左对齐。如果是+号或者不写，表示右对齐。
		}
		printf("\n");
	}
}
int main()
{
	int m;
	printf("请输入你想得到多少行的乘法口诀表\n");
	scanf("%d",&m);
	print_table(m);
	return 0;
}*/