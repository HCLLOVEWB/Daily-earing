//����ָ������

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
	int* arr[5];//ָ������
	//��Ҫһ�����飬���������Դ��4�������ĵ�ַ������ָ�������
	int (*pa)(int,int)=Add;//Sub\Mul\Div
	//int(*pa)(int,int);
	int(*parr[4])(int,int)={Add,Sub,Mul,Div};//����ָ�����飻(*parr[4])parr�Ⱥ�{4}��ϣ����Ծ������飬��parr[4]�ó���ʣ�µľ�����������ŵ��ĸ�Ԫ�ص����ͣ�(*parr[4])(int,int)��ȡ��parr[4],ʣ��(*)(int,int)
	int i=0;
	for(i=0;i<4;i++)
	{
		printf("%d\n",parr[i](2,3));//5 -1 6 0 parr���Բ�������
	}
	return 0;
}