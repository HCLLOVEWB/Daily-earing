//ָ�����鴫��
/*#include<stdio.h>
void print(int *p,int sz)//ָ�봫����ָ�����
{
	int i=0;
	for(i=0;i<sz;i++)
	{
		printf("%d\n",*(p+i));
	}
}
int main()
{
	int arr[10]={1,2,3,4,5,6,7,8,9};
	int *p=arr;
	int sz=sizeof(arr)/sizeof(arr[0]);
	//һ��ָ��p����������
	print(p,sz);
	return 0;
}*/
//˼������һ�������Ĳ�������Ϊһ��ָ���ʱ�򣬺����ܽ���ʲô����
//���磺
/*#include<stdio.h>
//test1�����ܽ���ʲô������
void test1(int *p)//�β���һ��һ��ָ�룬��ô���Դ�һ�������ĵ�ַ������һ����ŵ�ַ��һ��ָ�����
{}
//test2�����ܽ���ʲô����?
void test2(char* p)
{}
int main()
{
	int a=10;
	int* p1=&a;
	test1(&a);//ok
	test1(p1);//ok

	char ch='w';
	char* pc=&ch;
	test2(&ch);//ok
	test2(pc);//ok
	return 0;
}*/