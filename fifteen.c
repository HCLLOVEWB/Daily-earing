//汉罗塔问题
/*#include<stdio.h>
int main()
{
	void han(int n,char A,char B,char C);
	int n;
	printf("请输入A上有多少圈圈\n");
	scanf("%d",&n);
	han(n,'A','B','C');
	return 0;
}
void han(int n,char x,char y,char z)
{
	void move(char x,char y);
	if(n==1)
		move(x,z);
	else
	{
		han(n-1,x,z,y);
		move(x,z);
		han(n-1,y,x,z);
	}
}
void move(char x,char y)
{
	printf("%c->%c\n",x,y);
}*/
//用递归方法求n!
/*#include<stdio.h>
int main()
{
	int di(int i);
	int i,c;
	printf("请输入你想递归的数字\n");
	scanf("%d",&i);
	c=di(i);
	printf("%d的阶乘为%d",i,c);
	return 0;
}
int di(int i)
{
	int z;
	if(i==1)
	z=1;
	else
	z=di(i-1)*i;
	return z;
}*/
//第一个同学10岁，第二个同学比第一个同学大两岁，依次往后都是如此，问第10个同学多少岁
/*#include<stdio.h>
int main()
{
	int fun(int n);
	int a,b;
	printf("请输入你想知道第几个同学的年龄\n");
	scanf("%d",&a);
	b=fun(a);
	printf("第%d个同学的年龄为%d",a,b);
	return 0;
}
int fun(int n)
{
	int c;
	if(n==1)
	c=10;
	else
	c=fun(n-1)+2;
	return c;
}*/
//用函数的递归调用比较数组前四个数中的最大值
/*#include<stdio.h>
int main()
{
	int max(int a,int b,int c,int d);
	int i,w;
	int a[10];
	printf("请输入要比较的数字\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]==0)
		break;
	}
	w=max(a[0],a[1],a[2],a[3]);
	printf("%d",w);
	return 0;
}
int max(int a,int b,int c,int d)
{
	int max1(int a,int b);
	return(max1(max1(max1(a,b),c),d));
}
int max1(int a,int b)
{
	int z;
	z=a>=b?a:b;
	return(z);
}*/
