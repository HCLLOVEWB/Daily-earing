//����������
/*#include<stdio.h>
int main()
{
	int a=10;
	int b=20;
	int c=b+a*3;//���������ȼ�����ͬ��ʱ�����ȼ��ߵ�����
	a*b+c*d+e*f;//������ʽ���������
	//��Ϊ����*��+�����ȼ��ߣ�ֻ�ܱ�֤*�ļ����+�磬�������ȼ������ܾ���������*�ȵ�һ��+��ִ��
	c+--c;
	ͬ�ϣ������������ȼ�ֻ�ܾ����Լ�--��+�������ǰ�棬�������ǲ�û�а취��֪��+����������������Ļ�ȡ�����Ҳ�����֮ǰ����֮����ֵ�����Խ���ǲ���Ԥ��ģ����������
	return 0;
}*/
//�Ƿ����ʽ
/*#include<stdio.h>
int main()
{
	int i=10;
	i= i-- - --i*(i=-3)*i++ = ++i;
	//��ͬ�������еı��ʽ��ֵ�ǲ�һ���ģ������ǷǷ����ʽ������д�ı��ʽ������Ҫ��Ψһֵ
	printf("i=%d\n",i);
	return 0;
}*/
//
//ָ����ϰ1
/*#include<stdio.h>
int main()
{
	//32λָ���СΪ4���ֽ� 64λ��ָ���СΪ8���ֽ�
	//printf("%d\n",sizeof(char*));//4
	//printf("%d\n",sizeof(short*));//4
	//printf("%d\n",sizeof(int*));//4
	//printf("%d\n",sizeof(double*));//4
	int a=0x11223344;
	//һ���ֽ���8������λ ʮ�����Ƶ�F�൱�ڶ����Ƶ�1111
	//1���ֽ���8λ��������8λ��xxxxxxxx ��Χ��00000000��11111111����ʾ0��255��һλ16���������ö����Ʊ�ʾ��xxxx�����ֻ��ʾ��15������Ӧ16���Ƶ�F����Ҫ��ʾ��255,�ͻ���Ҫ�ڶ�λ������1���ֽڣ�2��16�����ַ���һ��16����λ��0.5���ֽڡ�
	int* pa=&a;
	char* pb=&a;
	printf("%p\n",pa);//pa��pb����ָ����������ĸ��ֽڶ��ܺܺõĴ��a
	printf("%p\n",pb);
	return 0;
}*/
//ָ�����͵Ľ����ò���
/*#include<stdio.h>
int main()
{
	int a=0x11223344;//a���ڴ�Ϊ44332211
	//int* pb=&a;//pb�ܹ��ı�a���ڴ�Ϊ00000000
	//*pb=0;//pb��pc���������
	char* pc=&a;//pc�ı�a���ڴ�Ϊ00332211
	*pc=0;
	//ָ�����;�����ָ����н����ò�����ʱ���ܹ����ʿռ�Ĵ�С
	//int* p;*p�ܹ�����4���ֽ�
	//char* p��*p�ܹ�����һ���ֽ�
	//double* p;*p�ܹ�����8���ֽ�
	return 0;
}*/
//ָ�����;����ˣ�ָ����һ���߶�Զ������ָ��Ĳ���
/*#include<stdio.h>
int main()
{
	int a=0x11223344;
	//int* pa=&a;
	char* pb=&a;
	//printf("%p\n",pa);//00B3FE68
	//printf("%p\n",pa+1);//00B3FE6C ��������4���ֽ�
	printf("%p\n",pb);
	printf("%p\n",pb+1);//������Ķ���һ���ֽ�
	//int* p;p+1-->4
	//char* p;p+1-->1
	//double* p;p-->8(����ǲ���)
	return 0;
}*/
//ָ�벽�������С��ϰ
/*#include<stdio.h>
int main()
{
	int arr[5]={0,1,2,3,4};
	int* p=arr;//������-��Ԫ�صĵ�ַ
	//char* p=arr;//ѭ��ʮ���൱����ʮ���ֽڣ���arr��40���ֽڣ��൱�ڰ����������飨ʮ���ֽڣ����1��
	int i=0;
	printf("%p\n",arr);
	printf("%p\n",arr+1);
	printf("%p\n",p);
	printf("%p\n",p+1);
	//for(i=0;i<10;i++)
	//{
	//	*(p+i)=1;//int* p *(p+1)�����4���ֽڣ�char* p *(p+1)�����1���ֽ�
	//}
	return 0;
}*/
//Ұָ��
//��Ұָ����ָָ��ָ���λ���ǲ���֪�ģ�����ģ�����ȷ�ģ�û����ȷ���Ƶģ���
//Ұָ���γɵ�ԭ��һ���ֲ���������ʼ����Ĭ�������ֵ
/*#include<stdio.h>
int main()
{
	int a;//�ֲ���������ʼ����Ĭ�������ֵ
	int* p;//�ֲ�ָ��������ͱ���ʼ�����ֵ
	//int* p=&a;
	*p=20;//�൱�������һ����ַ������20
	//���� ʹ����δ��ʼ���ľֲ�����
	return 0;
}*/
//Ұָ���γ�ԭ�����ָ��Խ����ʣ�
/*#include<stdio.h>
int main()
{
	int arr[10]={0};
	int* p=arr;
	int i=0;
	for(i=0;i<12;i++)
	{
		//*p=i;
		//p++;//���������ڴ棬�Ѿ������������ģ��Ѿ�Ծ����arr����ķ�Χ�ͱ���ΪҰָ��
		//����д������������ʽ
		*p++=i;//�Ƚ����ã�Ȼ����++
	}
	return 0;
}*/
//���������ָ���һЩСϸ��
/*#include<stdio.h>
int main()
{
	int arr[10]={0};
	int b=0;
	int* p=arr;//���鱾��Ϳ��Դ�ַ
	int* d=&b;
	return 0;
}*/
//Ұָ���γ�ԭ������ָ��ָ��Ŀռ��ͷţ�
/*#include<stdio.h>
int* test()//�ֲ��������������Ŀռ䴴�����������ķ�Χ�����٣����پ���ζ������ڴ�ռ仹���˲���ϵͳ�������ڱ������ˣ�
{
	int a=10;
	return(&a);
}
int main()
{
	int* p=test();
	*p=20;//���ովֲ������ĵ�ַ���ҵ��ڴ����ֵ����������ڴ�ռ��Ѿ��������������еĳ�����

	return 0;
}*/
//ָ��ָ��NULL
/*#include<stdio.h>
int main()
{
	//int a=10;
	//int* pa=&a;//��ʼ��
	//int* p=NULL;//NULL��������ʼ��ָ��ģ���ָ�븳ֵ
	//�൱�� int b=0; int* p=&b;
	
	int a=10;
	int* pa=&a;
	*pa=20;
	pa=NULL;//�������a�Ѿ��������ˣ�paָ���Ѿ����������ˣ����԰�paָ����ΪNULL���գ����Ͳ�ָ���κοռ��ˣ��Ͳ�����ű���a�ˣ�����pa��ΪҰָ�룩
	return 0;
}*/
//ָ��ʹ��֮ǰ�����Ч��
/*#include<stdio.h>
int main()
{
	int a=10;
	int* pa=&a;
	*pa=20;
	pa=NULL;
	*pa=10;//��Ϊpaָ���Ѿ���ΪNULL���Բ��ܷ�����
	if(pa!=NULL)
	{
	//������NULL��ʱ�����ָ��ſ���ʹ��
	}
	return 0;
}*/
//ָ�����ϰ2
/*#include<stdio.h>
int main()
{
	int a;
	int b;
	int *c;
	c=&a;
	int *d;
	d=&b;
	printf("&a=%p &b=%p\n",a,b);
	printf("&a=%p &b=%p\n",&a,&b);
	printf("&a=%d &b=%d\n",&a,&b);
	printf("*c=%p,*d=%p\n",c,d);
	printf("*c=%d,*d=%d\n",c,d);
	int *e;
	scanf("%d %d",&a,&b);
	printf("&a=%p &b=%p\n",a,b);
	printf("&a=%p &b=%p\n",&a,&b);
	printf("&a=%d &b=%d\n",&a,&b);
	printf("*c=%p,*d=%p\n",c,d);
	printf("*c=%d,*d=%d\n",c,d);
	return 0;
}*/
//ָ�����
/*#include<stdio.h>
int main()
{
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	int i=0;
	int* pa=arr;
	int* pb=&arr[9];
#if 0
	int sz=sizeof(arr)/sizeof(arr[0]);
	for(i=0;i<sz;i++)
	{
		printf("%d ",*pa);
		pa=pa+1;//�����һ������ �൱��p++
	}
#endif
	for(i=1;i<5;i++)
	{
		printf("%d ",*pb);
		pb-=2;
	}
	return 0;
}*/
//ָ��+-���� //ָ��Ĺ�ϵ����
/*#include<stdio.h>
#define N_VALUES 5
int main()
{
	float values[N_VALUES];
	float* vp;
	//ָ��+-����  ָ��Ĺ�ϵ����
	for(vp=&values[0];vp<&values[N_VALUES];)//for�ĵڶ������������ָ��Ҳ���ԱȽϴ�С
	{
		*vp++=0;
	}
}*/
//ָ��-ָ��
/*#include<stdio.h>
int main()
{
	char ch[5]={0};
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	printf("%d\n",&arr[9]-&arr[0]);//9 ָ���ȥָ��õ������м�Ԫ�صĸ���
	printf("%d\n",&arr[0]-&arr[9]);//-9
	printf("%d\n",&arr[9]-&ch[0]);//�Ǵ���ģ����ɹ�����ֵ��������ͬһ������
	return 0;
}*/
//��ָ�����ַ�������
/*#include<stdio.h>
int my_strlen(char* str)
{
	char* start=str;//ָ������׵�ַ
	char* end=str;//ָ������׵�ַ
	while(*end!='\0')//ͨ��ѭ��ʹendָ�벻������ƣ�ֱ���ҵ���\0��
	{
		end++;
	}
	return (end-start);//����õ��ַ�������
}
int main()
{
	char arr[]="bit";//bit\0
	int len=my_strlen(arr);
	printf("%d",len);
	return 0;
}*/
//ָ��Ĺ�ϵ����
/*#include<stdio.h>
#define N_VALUES 5
int main()
{
	float values[N_VALUES];
	float* vp;
	//����д���ﵽͬ��������
	//������д�����ʱ�����д�����
	//��Ϊ����ķ����ھ�������������¿���ִ�У����Ǳ�׼�����ܱ�֤������
	//��׼�涨������ָ������Ԫ�ص�ָ����ָ���������һ��Ԫ�غ�����Ǹ��ڴ�λ�õ�ָ��Ƚϣ�
	//�Ͻӣ����ǲ�������ָ���һ��Ԫ��֮ǰ���Ǹ��ڴ�λ�õ�ָ����бȽ�
#if 0
	for(vp=&values[N_VALUES];vp>&values[0];)//�ڶ���������ָ��Ƚϴ�С��û�е��������������Ծ�ֱ���жϵڶ�������
	{
		*--vp=0;//vpָ��һֱ��ǰŲ��
	}
#endif
	for(vp=&values[N_VALUES-1];vp>=&values[0];vp--)
	{
		*vp=0;
	}
	return 0;
}*/
//�����ָ��
/*#include<stdio.h>
int main()
{
	int arr[10]={0};
	int* p=arr;
	int i=0;
	for(i=0;i<10;i++)
	{
		*(p+i)=i;
	}
	for(i=0;i<10;i++)
	{
		//printf("%d ",arr[i]);//����ķ�ʽ��ӡ����Ϊ0 1 2 3 4 5 6 7 8 9
		printf("%d ",*(p+i));//ָ��ķ�����ӡ����
	}
#if 0
	for(i=0;i<10;i++)
	{
		printf("%p========%p\n",p+i,&arr[i]);//���ֵ�ַ��һ����
	}
#endif

	return 0;
}*/
//����ָ��
/*#include<stdio.h>
int main()
{
	int a=10;
	int* pa=&a;
	int** ppa=&pa;//ppa���Ƕ���ָ��
	int*** pppa=&ppa;//pppa������ָ��
	**ppa=20;
	printf("%d\n",**ppa);//20
	printf("%d\n",*pa);//20
	printf("%d\n",a);//20
	return 0;
}*/
//ָ�����鱾����ָ��  �Ǵ��ָ�������
//����ָ�뱾����ָ��
/*#include<stdio.h>
int main()
{
	int a=10;
	int b=20;
	int c=30;
	int i;
	//int* pa=&a;
	//int* pb=&b;
	//int* pc=&c;
	int* arr[3]={&a,&b,&c};//�����һ��ָ�����飬�����ŵ�ÿһ��Ԫ�ض���ָ��
	for(i=0;i<3;i++)
	{
		printf("%d\n",*(arr[i]));//10 20 30
	}
	return 0;
}*/