//����ָ��--ָ������ָ��

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
	//&�������ͺ��������Ǻ����ĵ�ַ
	printf("%p\n",&Add);//Add�����ĵ�ַ
	printf("%p\n",Add);//&�������ͺ��������Ǻ����ĵ�ַ
	int (*pa)(int,int)=Add;//����ָ�룬������Բ���ŵ��Ǻ���ָ�룬��������ֻҪָ�����������;��У�����д��д������
	int (*pa)(int x,int y)=Add;
	//int *pa(int int)=Add ����д��������*p����Ҫ�������ţ���Ȼ�Ļ�P�Ⱥͺ����Բ���Ž�ϣ��Ǿ��Ǻ����ˣ����*p�������ţ�p���Ⱥ�*��ϣ�����ָ����
	printf("%d\n",(*pa)(2,3));//5  ͨ������ָ���ҵ����������ú���ʵ��2��3�����
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