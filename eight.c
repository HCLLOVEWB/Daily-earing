//����һ���ַ�������ָ���ķ���ɾ��
/*#include<stdio.h>
int main()
{
	void enter(char a[]);
	void deletestr(char a[],char m);
	void print(char a[]);
	char a[80];
	char m=' ';
	enter(a);
	deletestr(a,m);
	print(a);
	return 0;
}
void enter(char a[])
{
	printf("������һ���ַ���\n");
	gets(a);
	int i;
	for(i=0;a[i]!='\0';i++)
	{}
	printf("����ַ�������Ϊ%d\n",i);
}
void deletestr(char a[],char m)
{
	int i,j;
	printf("��Ҫɾ�����ַ��ǡ� ��");
	for(i=0,j=0;a[i]!='\0';i++)
	{
		if(a[i]!='m')
			a[j++]=a[i];
	}
	a[j]='\0';
}
void print(char a[])
{
	int i;
	printf("ɾ��������ַ���Ϊ\n");
	for(i=0;a[i]!='\0';i++)
		printf("%c",a[i]);
}*/
//������Ԫ�����򷵻أ����ö�Ӧһǰһ��Ե�����ʽ��
/*#include<stdio.h>
void Init(int arr[],int sz)
{
	int i=0;
	for(i=0;i<sz;i++)
	{
		arr[i]=0;
	}
}
void printf(int arr[],int sz)
{
	int i=0;
	for(i=0;i<sz;i++)
		printf("%d ",arr[i]);
	printf("\n");
}
void peverse(int arr[],int sz)
{
	int left=0;
	int right=sz-1;
	while(left<right)
	{
		int tmp=0;
		tmp=arr[left];
		arr[left]=arr[right];
		arr[right]=tmp;
		left++;
		right--;
	}
}
int main()
{
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	int sz=sizeof(arr)/sizeof(arr[0]);
	//Init(arr,sz);//��Ԫ�س�ʼ��Ϊ0
	printf(arr,sz);
	peverse(arr,sz);
	printf(arr,sz);
	return 0;
}*/
//����������н���
/*#include<stdio.h>
void print(int arr[],int sz)
{
	int i=0;
	for(i=0;i<sz;i++)
	{
		printf("%d ",arr[i]);
	}	
    printf("\n");
}
int main()
{
	int arr1[]={1,3,5,7,9};
	int arr2[]={2,4,6,8,10};
	int i=0;
	int sz1=sizeof(arr1)/sizeof(arr1[0]);
	int sz2=sizeof(arr2)/sizeof(arr2[0]);
	int tem=0;
	for(i=0;i<sz1;i++)
	{
		tem=arr1[i];
		arr1[i]=arr2[i];
		arr2[i]=tem;
	}
	print(arr1,sz1);
	print(arr2,sz2);
	return 0;
}*/
//�й�ָ�����ȤС��ϰ
/*#include<stdio.h>
int main()
{
	int arr[]={1,2,3,4,5};
	short* p=(short*)arr;//short* ÿ�β��������ֽ� ��arrǿ��ת����short* ����ֵ��p
	int i=0;//����short*pռ�����ֽڣ�p+1��ʱ�򲽳�Ҳ��2���ֽ�
	for(i=0;i<4;i++)//��i=0��ʱ��*(p+0)=0,ֻ�Ὣarr[0]��1��ǰ�����ֽڱ�Ϊ0����ѭ��һ�Σ�i=1��ʱ�򲽳���2����arr[0]�ĺ������ֽ�Ҳ�����0
	{
		*(p+i)=0;//�Ĵ�ѭ����Ҳֻ�ǽ�1��2�����0
	}
	for(i=0;i<4;i++)
	{
		printf("%d",arr[i]);//0 0 3 4 5 
	}
	return 0;
}*/
//�й�ָ�����ȤС��ϰ
/*#include<stdio.h>
int main()
{
	int a=0x11223344;//���ڴ�����ǵ��Ŵ�ŵ� Ϊ44 33 22 11 һ���ĸ��ֽڣ�44ռһ���ֽ� 33ռһ���ֽ��Դ�����
	char *pc=(char*)&a;//����pc��char*���� ����*pc�ڲ�����ʱ��ֻ�ܲ���һ���ֽ�
	*pc=0;//���ڴ�ŵ� Ϊ44 33 22 11��pcֻ����һ���ֽڣ����Ը�Ϊ00 33 22 11
	printf("%x\n",a);//�������ʱ���ٵ���ȥ �������a��ʮ������Ϊ11223300
	return 0;
}*/
//sizeof���ص�һ�������޷��������������������߱Ƚϵ�ʱ�򣬻Ὣ����ת�����޷�����
/*#include<stdio.h>
int i;//i��ȫ�ֱ�����ȫ�ֱ�������ʼ����Ĭ����0
int main()
{
	i--;
	if(i>sizeof(i))//sizeof�Ǽ��������������ռ�ڴ�Ĵ�С(��Сһ���Ǻ���ڵ���0�ģ�һ�㶼���޷������Ǵ��ڵ���0��)
	{//sizeof����֮�󷵻ص����͵�ֵ���޷����� ��һ������(i=-1)��һ���޷�����(sizeof(i))������߱Ƚϴ�С��ʱ�򣬻��Ȱ�����(i=-1)ת�����޷�����
	//-1�Ĳ�����111111111111111111111111��ת�����޷�������ʱ��ѷ���λ�����ɷ���λ�����Կ�������
	//1111111111111111111111����ԭ�룬��4,294,967,295����Ϊ�����Ĳ��뷴��Դ�붼��һ���ģ�����������ǳ��Ĵ����Ծͷ���>
		printf(">\n");
	}
	else
	{
		printf("<\n");
	}
	return 0;//������>
}*/
//ָ�����������������ֵ(����ʾ��)
//C������ʵ�α������βα���֮�����ֵ�����ǵ����ֵ���ݷ�ʽ����ָ���������������ʱͬ��Ҫ��ѭ��һ���򡣲�����ͨ��ִ�е��ú������ı�ʵ��ָ�������ֵ�����ǿ��Ըı�ʵ��ָ�������ָ������ֵ
/*#include<stdio.h>
int main()
{
    void switc(int* pa,int* pb);
	int a;
	int b;
	printf("������������\n");
	scanf("%d%d",&a,&b);
	int* pa=&a;
	int* pb=&b;
	pa=&a;
	pb=&b;
	if(a<b)
	switc(pa,pb);
	printf("a=%d b=%d",*pa,*pb);
	return 0;
}
void switc(int* pa,int* pb)
{
	int* p;
	p=pa;
	pa=pb;
	pb=p;
}*/