//�������ַ����е��ַ���������Ҫ�󣺲���ʹ��C�������е��ַ�������������
//����a="a,b,c,d,e"��a��Ϊa="e,d,c,b,a",���Ǽ򵥵������ӡ
/*#include<stdio.h>
void reverse_string(char arr[],int sz)
{
	int left=0;
	int right=sz-1;
	int temp,i;
	for(i=0;i<sz;i++)
	{
		if(left<right)
		{
			temp=arr[left];
			arr[left]=arr[right];
			arr[right]=temp;
			left++;
			right--;
		}
	}
}
int main()
{
	char arr[]="abcdefg";
	int i;
#if 0
	printf("������һ���ַ����ַ���\n");
	for(i=0;arr[i]!='N';i++)
	{
		scanf("%c",&arr[i]);
		sz++;
	}
#endif
	int sz=sizeof(arr)/sizeof(arr[0])-1;
	reverse_string(arr,sz);
	for(i=0;i<sz;i++)
	{
		printf("%c ",arr[i]);
	}
	printf("\n");
	return 0;
}*/
//�������ַ����е��ַ��������򷽷�����Ҫ�󣺲���ʹ��C�������е��ַ�������������
//����a="a,b,c,d,e"��a��Ϊa="e,d,c,b,a",���Ǽ򵥵������ӡ
/*#include<stdio.h>
#include<string.h>
int my_strlen(char* str)
{
	int count=0;
	while(*str!='\0')
	{
		count++;
		str++;
	}
	return count;
}
void reverse_string(char arr[])
{
	int left=0;
	//int right=strlen(arr)-1;
	int right=my_strlen(arr)-1;
while(left<right)
	{
			int temp=arr[left];
			arr[left]=arr[right];
			arr[right]=temp;
			left++;
			right--;
	}
}
int main()
{
	char arr[20]="abcdefg";
	int i,sz=0;
	reverse_string(arr);
	printf("%s\n",arr);
	return 0;
}*/
//�������ַ����е��ַ��������򷽷������ݹ��㷨����Ҫ�󣺲���ʹ��C�������е��ַ�������������
//����a="a,b,c,d,e"��a��Ϊa="e,d,c,b,a",���Ǽ򵥵������ӡ
/*#include<stdio.h>
int my_strlen(char* str)
{
	int count=0;
	while(*str!='\0')
	{
		count++;
		str++;
	}
	return count;
}
void reverse_string(char arr[])
{
	char tmp=arr[0];
	int len=my_strlen(arr);
	arr[0]=arr[len-1];
	arr[len-1]='\0';
	if(my_strlen(arr+1)>=2)
		reverse_string(arr+1);
	arr[len-1]=tmp;
}
int main()
{
	char arr[]="abcdefg";
	reverse_string(arr);
	printf("%s\n",arr);
	return 0;
}*/
//�ַ����Ŀ�������arr1����arr2�ǿ�ָ���ʱ�򣬻���ɳ��������
/*#include<stdio.h>
#include<string.h>
void my_strcpy(char* arr1,char* arr2)
{
#if 0
	while(*arr2!='\0')
	{
		*arr1++=*arr2++;
		//*arr1=*arr2;
		//arr1++;
		//arr2++;
	}
	*arr1=*arr2;
#endif
	while(*arr1++=*arr2++)//��arr2��'\0'��ֵ��arr1��ʱ��arr1=0��Ϊ�٣��˳�ѭ��
	{
		;
	}
}
int main()
{
	char arr1[]="##############";
	char arr2[]="hclwb";
	//strcpy(arr1,arr2);//strcpy �ַ����Ŀ��� ��arr2�ַ���������arr1�ַ�������
	my_strcpy(arr1,arr2);
	printf("%s\n",arr1);
	//my_strcpy
	return 0;
}*/
//�ַ����Ŀ���(�Ż����İ汾��)
/*#include<stdio.h>
#include<assert.h>
void my_strcpy(char* arr1,char* arr2)
{
	//������ʽ expression ��ֵΪ�٣���Ϊ 0������ô�����������׼������ stderr ��ӡһ��������Ϣ��Ȼ����ͨ������ abort ������ֹ�������У�����assert ���κ����á�
	//����arr1��arr2�ǿ�ָ���ʱ��ͻ���ֹ�������У����׳�����
	assert(arr1!=NULL);//���� 
	assert(arr2=NULL);
		while(*arr1++=*arr2++)//��arr2��'\0'��ֵ��arr1��ʱ��arr1=0��Ϊ�٣��˳�ѭ��
	{
		;
	}

}
int main()
{
	char arr1[]="##############";
	char arr2[]="hclwb";
	//strcpy(arr1,arr2);//strcpy �ַ����Ŀ��� ��arr2�ַ���������arr1�ַ�������
	my_strcpy(arr1,arr2);
	printf("%s\n",arr1);
	//my_strcpy
	return 0;
}*/
//�ַ����Ŀ���(�����Ż��İ汾��)
/*#include<stdio.h>
#include<assert.h>
void my_strcpy(char* arr1,const char* arr2)//constx����arr2����֤arr2�������޸ġ�const��ֹ��arr1��arr2��λ�÷ŷ��ˣ�����const���arr2������arr1��λ�þͻᱨ��
{
	//������ʽ expression ��ֵΪ�٣���Ϊ 0������ô�����������׼������ stderr ��ӡһ��������Ϣ��Ȼ����ͨ������ abort ������ֹ�������У�����assert ���κ����á�
	//����arr1��arr2�ǿ�ָ���ʱ��ͻ���ֹ�������У����׳�����
	assert(arr1!=NULL);//���� 
	assert(arr2!=NULL);
		while(*arr1++=*arr2++)//��arr2��'\0'��ֵ��arr1��ʱ��arr1=0��Ϊ�٣��˳�ѭ��
	{
		;
	}

}
int main()
{
	char arr1[]="##############";
	char arr2[]="hclwb";
	//strcpy(arr1,arr2);//strcpy �ַ����Ŀ��� ��arr2�ַ���������arr1�ַ�������
	my_strcpy(arr1,arr2);
	printf("%s\n",arr1);
	//my_strcpy
	return 0;
}*/
//const��ֹ��ָ���޸ĵ�С��ϰ
/*#include<stdio.h>
int main()
{
	//��num����const������Ը�ǲ���num��ֵ���޸ģ�����ͨ���Ƿ��ķ�ʽ������ָ��ķ�ʽ��num�޸�
	//��Ҫ�ѵ�ַ����p�����ֲ������޸�num��ֵ�����Խ������ָ�������ǰ��Ҳ����const
	//��ָ��p��ǰ�����const֮��������*p=20;�ᱨ�� ��ֵָ��const������ֵ�����ǿ��޸ĵ�
	const int num=10;
	int n=100;
#if 0
	const int* p=&num;//const����ָ�����*���ʱ�����ε���*p,����*p�����ǲ�����p.Ҳ����˵������ͨ��p��ֵ���ı�*p(num)��ֵ
	//int* p=&num;    //*p=10����ʵ�֣�����p=&n����ʵ��
#endif
	int* const p=&num;//const����ָ�����*�ұ�ʱ�����ε���ָ���������(p),����p�����ǲ�����*p.Ҳ����˵p���ܱ��ı�
	*p=20;            //*p=20����ʵ�֣�����p=&n������ʵ��
	p=&n;
	const int* const p=&num;//const������*p,������p
	printf("%d\n",num);     //*p=10��p=&n������ʵ��
	return 0;
}*/
//�ַ����Ŀ���(���Ż��İ汾��)
/*#include<stdio.h>
#include<assert.h>
char* my_strcpy(char* arr1,const char* arr2)//constx����arr2����֤arr2�������޸ġ�const��ֹ��arr1��arr2��λ�÷ŷ��ˣ�����const���arr2������arr1��λ�þͻᱨ��
{
	char* ret=arr1;
	//������ʽ expression ��ֵΪ�٣���Ϊ 0������ô�����������׼������ stderr ��ӡһ��������Ϣ��Ȼ����ͨ������ abort ������ֹ�������У�����assert ���κ����á�
	//����arr1��arr2�ǿ�ָ���ʱ��ͻ���ֹ�������У����׳�����
	assert(arr1!=NULL);//���� 
	assert(arr2!=NULL);//����
	//��arr2ָ����ַ���������arr1ָ��Ŀռ����'\0'�ַ�
		while(*arr1++=*arr2++)//��arr2��'\0'��ֵ��arr1��ʱ��arr1=0��Ϊ�٣��˳�ѭ��
	{
		;
	}
	return ret;
}
int main()
{
	char arr1[]="##############";
	char arr2[]="hclwb";
	//strcpy(arr1,arr2);//strcpy �ַ����Ŀ��� ��arr2�ַ���������arr1�ַ�������
	printf("%s\n",my_strcpy(arr1,arr2));
	//my_strcpy
	return 0;
}*/
