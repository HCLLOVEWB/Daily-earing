//һά���鴫��
/*#include<stdio.h>
void test(int arr[])//ok
{}
void test(int arr[10])//ok
{}
void test(int *arr)//ok
{}
void test2(int *arr[])//ok
{}
void test2(int *arr[20])//ok
{}
void test2(int **arr)//ok ����������Ԫ�ص�ַ��arr2�����ÿ��Ԫ�ض���int*���͵ģ��Ǹ�һ��ָ�룬һ��ָ��ĵ�ַ���÷��ڶ���ָ������ȥ
{}
int main()
{
	int arr[10]={0};
	int *arr2[20]={0};
	test(arr);
	test2(arr2);
	return 0;
}*/

//��ά���鴫��
/*#include<stdio.h>
void test(int *arr)//
{}
void test(int arr[3][5])//ok
{}
void test(int arr[][5])//ok �п���ʡ�ԣ������в�����ʡ��
{}
void test(int arr[3][])//no �п���ʡ�ԣ������в�����ʡ��
{}
void test(int arr[][])//no �п���ʡ�ԣ������в�����ʡ��
{}
void test(int *arr)//no arr�Ƕ�ά���飬��ʾ��Ԫ�صĻ����������һ�еĵ�ַ(һά����ĵ�ַ)���ܴ����int*(���ε�ַ)����
{}
void test(int **arr)//no arr�Ƕ�ά���飬��ʾ��Ԫ�صĻ����������һ�еĵ�ַ(һά����ĵ�ַ�����ܴ���ڶ���ָ����(����ָ���Ǵ��һ��ָ��ĵ�ַ)
{}
void test(int *arr[5])//no ָ�����飬����Ԫ���������ÿ��Ԫ����int* ����
{}
void test(int (*arr)[5])//ok ָ��ָ�����飬�����������Ԫ�أ�Ԫ����int��
{}
int main()
{
	int arr[3][5]={0};
	test(arr);//��ά���鴫��,��������Ԫ�صĵ�ַ(��һ��һά����ĵ�ַ)
	return 0;
}*/
