//����ָ�����д
/*#include<stdio.h>
int main()
{
	char* arr[5];
	char*(*pa)[5]=&arr;

	int arr2[10]={0};
	int (*pa2)[10]=&arr2;
	return 0;
}*/
//&arr+1�����������飬arr+1����������һ��Ԫ�أ�ָ����һ��Ԫ��
/*#include<stdio.h>
int main()
{
	int arr[10]={0};
	printf("arr=%p\n",arr);//arr=0078F888
	printf("&arr=%p\n",&arr);//&arr=0078F888

	printf("arr+1=%p\n",arr+1);//arr+1=0078F88C
	printf("&arr+1=%p\n",&arr+1);//&arr+1=0078F8B0
	return 0;
}*/
//��������Ĵ������Ƿ��֣���ʵ&arr��arr����Ȼֵ��һ���ģ���������Ӧ�ò�һ���ġ�ʵ����:&arr��ʾ��������ĵ�ַ��������������Ԫ�صĵ�ַ��(ϸϸ���һ��)����ĵ�ַ+1��������������Ĵ�С������&arr+1�����&arr�Ĳ�ֵ��40.
//��ָ�������ָ���ӡ����Ԫ��
/*#include<stdio.h>
int main()
{
	int arr[10]={1,2,3,4,5,6,7,8,9,10};

	int *p=arr;
	int i=0;
	for(i=0;i<10;i++)
	{
		printf("%d ",*(p+i));
	}

	//int (*pa)[10]=&arr;
	//int i=0;
	//for(i=0;i<10;i++)
	//{
	//	printf("%d ",*(*pa+1));//*pa==arr
	//}

#if 0
	for(i=0;i<10;i++)
	{
		printf("%d ",(*pa)[i]);
	}
#endif
	return 0;
}*/