//ָ��Ľ���

//1.ָ����Ǹ�������������ŵ�ַ����ַΨһ��ʶһ���ڴ�ռ䡣
//2.ָ��Ĵ�С�ǹ̶���4/8���ֽ�(32λƽ̨/64λƽ̨)��
//3.ָ���������ͣ�ָ������;�����ָ���+-�����Ĳ�����ָ������ò�����ʱ���Ȩ�ޡ�
//4.ָ������㡣

/*#include<stdio.h>
int main()
{
	char arr[]="abcdef";
	char* pc=arr;
	printf("%s\n",arr);
	printf("%s\n",pc);
	return 0;
}*/
/*#include<stdio.h>
int main()
{
	const char* p="abcdef";//"abcdef"��һ�������ַ���
	//*p='W';//�ᱨ�� ��������
	printf("%s\n",p);//Segmentation fault�Ĵ��󣨶δ���
	//printf("%c\n",*p);//a
	//printf("%s\n",p);//abcdef p��ŵ������ַ��ĵ�ַ
	return 0;
}*/
/*#include<stdio.h>
int main()
{
	char arr1[]="abcdef";
	char arr2[]="abcdef";
	const char* p1="abcdef";//�����ַ���
	const char* p2="abcdef";//�����ַ���  pi��p2ָ��ͬһ��ռ�λ�õ���ʼ��ַ

	if(p1==p2)
	{
		printf("hehe\n");//��ӡhehe
	}
	else
	{
		printf("haha\n");
	}
#if 0
	if(arr1==arr2)//��Ϊarr1��arr2�����鲻ͬ�ĵ�ַ��arr1��arr1��Ԫ�صĵ�ַ��arr2��ŵ���arr2��Ԫ�صĵ�ַ
	{             //����arr1��arr2����ͬ
		printf("hehe\n");
	}
	else
	{
		printf("haha\n");//��ӡ��haha
	}
#endif
	return 0;
}*/