//ָ�����������飬�������ָ���
/*#include<stdio.h>
int main()
{
	int arr[10]={0};//��������
	char ch[5]={0};//�ַ�����
	int* parr[4];//�������ָ�������---ָ������
	char* pch[5];//����ַ�ָ�������---ָ������
	return 0;
}*/
/*#include<stdio.h>
int main()
{
	int a=10;
	int b=20;
	int c=30;
	int d=40;
	int* arr[4]={&a,&b,&c,&d};
	int i=0;
	for(i=0;i<4;i++)
	{
		printf("%d ",*(arr[i]));//10 20 30 40
	}
	return 0;
}*/
/*#include<stdio.h>
int main()
{
	int arr1[]={1,2,3,4,5};
	int arr2[]={2,3,4,5,6};
	int arr3[]={3,4,5,6,7};
	int *parr[]={arr1,arr2,arr3};
	int i=0;
	for(i=0;i<3;i++)
	{
		int j=0;
		for(j=0;j<5;j++)
		{
			printf("%d",*(parr[i]+j)); //12345
		}                              //23456
		printf("\n");                  //34567
	}
	return 0;
}*/