//����������
/*#include<stdio.h>
int main()
{
	void han(int n,char A,char B,char C);
	int n;
	printf("������A���ж���ȦȦ\n");
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
//�õݹ鷽����n!
/*#include<stdio.h>
int main()
{
	int di(int i);
	int i,c;
	printf("����������ݹ������\n");
	scanf("%d",&i);
	c=di(i);
	printf("%d�Ľ׳�Ϊ%d",i,c);
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
//��һ��ͬѧ10�꣬�ڶ���ͬѧ�ȵ�һ��ͬѧ�����꣬������������ˣ��ʵ�10��ͬѧ������
/*#include<stdio.h>
int main()
{
	int fun(int n);
	int a,b;
	printf("����������֪���ڼ���ͬѧ������\n");
	scanf("%d",&a);
	b=fun(a);
	printf("��%d��ͬѧ������Ϊ%d",a,b);
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
//�ú����ĵݹ���ñȽ�����ǰ�ĸ����е����ֵ
/*#include<stdio.h>
int main()
{
	int max(int a,int b,int c,int d);
	int i,w;
	int a[10];
	printf("������Ҫ�Ƚϵ�����\n");
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
