//����ֵֹ�֪ʶ����������(define��С֪ʶ��)
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
//����ֵֹ�֪ʶ�㣨ע�ʹ��룩
/*#include<stdio.h>
int main()
{
#if 0   
	int a;  //����ע�ͷ�ʽ���Ӱ�ȫ
	int b;
	int c;
#endif
	return 0;
}*/
//���1��n�Ľ׳�ֵ(�Լ�Ϲ��İ취)
/*#include<stdio.h>
int main()
{
	void fun(int n);
	int i,n;
	printf("����������֪���Ľ׳��������ǻ���������֮ǰ����������������������ֵĽ׳���\n");
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
//���1��n�Ľ׳�ֵ(������static�ľ�̬�ֲ�����)
/*#include<stdio.h>
int main()
{
	int fun(int n);
	int i,n;
	printf("����������֪���Ľ׳����ĸ��������ǻ�����������֮ǰ(���������)���������ֵĽ׳�ֵ\n");
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
	i=i*n;//����Ҫ��i���и�ֵ��i��ֵ�ſ��Է����仯�����ֱ��д��return(i*n),i��ֵ��û�з����仯��һֱ����1
	return (i);
}*/
//��ѡ�񷨶�������ʮ����������С��������(�Ϲ��̵ķ���)
/*#include<stdio.h>
int main()
{
	void bi(int a[],int len);
	int a[10];
	int i,len=0;
	printf("������ʮ������\n");
	for(i=0;i<sizeof(a)/sizeof(a[0]);i++)
	{
		scanf("%d",&a[i]);
		len++;
	}
	printf("������鳤��Ϊ%d\n",len);
	bi(a,len);
	printf("����������Ϊ\n");
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
//��ѡ�񷨶�������ʮ����������С��������(���ϵķ���)
/*#include<stdio.h>
int main()
{
	void bi(int a[],int len);
	int a[10];
	int i,len=0;
	printf("������ʮ������\n");
	for(i=0;i<sizeof(a)/sizeof(a[0]);i++)
	{
		scanf("%d",&a[i]);
		len++;
	}
	printf("������鳤��Ϊ%d\n",len);
	bi(a,len);
	printf("����������Ϊ\n");
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
//��ѡ�񷨶�������ʮ����������С������������Ǵ���ģ������Ľ���ǽ�ʮ�������������һ�飩
/*#include<stdio.h>
int main()
{
	void bi(int a[],int len);
	int a[10];
	int i,len=0;
	printf("������ʮ������\n");
	for(i=0;i<sizeof(a)/sizeof(a[0]);i++)
	{
		scanf("%d",&a[i]);
		len++;
	}
	printf("������鳤��Ϊ%d\n",len);
	bi(a,len);
	printf("����������Ϊ\n");
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
//ʵ��һ����������ӡ�˷��ھ����˷��ھ���������������������Լ�ָ����������12�������12*12�ĳ˷��ھ���
/*#include<stdio.h>
void print_table(int m)
{
	int i,j;
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d*%d=%-3d ",j,i,i*j);//d��ʾ���������3��ʾ���������ռ3���ַ���λ�á�-�ű�ʾ���뷽ʽ��������롣�����+�Ż��߲�д����ʾ�Ҷ��롣
		}
		printf("\n");
	}
}
int main()
{
	int m;
	printf("����������õ������еĳ˷��ھ���\n");
	scanf("%d",&m);
	print_table(m);
	return 0;
}*/