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
//ָ�����������������ֵһ(ͨ���ı�ʵ��ָ�������ָ������ֵʵ��)
/*#include<stdio.h>
int main()
{
	void swap(int* pa,int* pb);
	int a,b;
	printf("������a��b\n");
	scanf("%d%d",&a,&b);
	int* pa,* pb;
	pa=&a;
	pb=&b;
	if(a<b)
		swap(pa,pb);
	printf("a=%d b=%d",a,b);
	return 0;
}
void swap(int* pa,int* pb)
{
	int tmp;
	tmp=*pa;
	*pa=*pb;
	*pb=tmp;
}*/
//ָ�����������������ֵ��(ͨ��������ָ�����������ָ�������ֵʵ��)
/*#include<stdio.h>
int main()
{
	int a,b;
	printf("������a��b\n");
	scanf("%d%d",&a,&b);
	int* pa,* pb,* p;
	pa=&a;
	pb=&b;
	if(a<b)
	{
		p=pa;
		pa=pb;
		pb=p;
	}
	printf("*pa=%d,*pb=%d\n",*pa,*pb);//9 3
	printf("a=%d b=%d\n",a,b);//3 9
	return 0;
}*/
//ָ�����������������ֵ��()
/*#include<stdio.h>
int main()
{
	void swap(int* pa,int* pb);
	int a,b;
	printf("������a��b\n");
	scanf("%d%d",&a,&b);
	int* pa,* pb;
	pa=&a;
	pb=&b;
	if(a<b)
		swap(pa,pb);
	printf("a=%d b=%d",a,b);
	return 0;
}
void swap(int* pa,int* pb)
{
#if 0
	int* tmp;
	*tmp=*pa;//����������� *pa����;��*temp��ָ�����temp��ָ��ı�����������δ��temp��ֵ�����temp�в���ȷ����ֵ������ֵ�ǲ���Ԥ���ģ�������temp��ָ�ĵ�ԪҲ�ǲ���Ԥ����
	*pa=*pb;//���Զ�*temp��ֵ���Ƕ�һ��δ֪�Ĵ洢��Ԫ��ֵ�������δ֪�Ĵ洢��Ԫ�п��ܴ洢��һ�����õ����ݣ��������п����ƻ�ϵͳ����������״̬
	*pb=*tmp;
#endif
	//int temp;//Ӧ�ý�*pa��ֵ������*pa��ͬ���͵ı������ڱ����������ͱ���temp��Ϊ��ʱ��������ʵ��*pa��*pb�Ľ���
	//temp=*pa;
	//*pa=*pb;
	//*pb=temp;
	int* temp;//����Ҳ�ǿ��Եģ�����Ҫ��tempָ�븳��ֵ����Ȼ����Ұָ��
	int a=0;
	temp=&a;
	*temp=*pa;
	*pa=*pb;
	*pb=*temp;
}*/
//ʹ��ָ���ӡ����
/*#include<stdio.h>
void print(int* arr,int sz)
{
	int i;
	for(i=0;i<sz;i++)
	{
		printf("%d ",*(arr+i));
	}
}
int main()
{
	int arr[]={1,2,3,4,5,6,7,8,9};
	int sz=sizeof(arr)/sizeof(arr[0]);
	print(arr,sz);
	return 0;
}*/
//ʹ��ָ���ӡ�����С��
/*#include<stdio.h>
int main()
{
	int *p,i,a[10];
	p=a;
	printf("������ʮ������\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",p++);
	}
	//p=a;������ڵ�һ��forѭ��֮����ϴ���䣬��Ϊ��Ϊ������һ��forѭ����������֮��p��ָ��a�����ĩβ�������ָ��ڶ���forѭ��ʱ��P����ʼֵ����&a[0]�˶���a+10.
	   //����ִ�еڶ���forѭ����ʱ��ÿ��Ҫִ��p++�����pָ�����a���������10���洢��Ԫ
	for(i=0;i<10;i++,p++)
	{
		printf("%d",*p);
	}
	printf("\n");
	return 0;
}*/
/*��ָ��ָ������Ԫ��ʱ��ָ��������Դ��±ꡣ��Ϊ�ڳ�������ʱ�򣬶��±�Ĵ�������ת��Ϊ��ַ�ģ���p[i]�����*(p+1),���p��ָ��1������Ԫ��a[0]����p[i]����a[i].
���Ǳ���Ū���p�ĵ�ǰֵ��ʲô�������ǰpָ��a[3]����p[2]��������a[2],����a[3+2]����a[5](����������Щ���׳���ķ���)
�������漸�����(��p��ʼָ������a����Ԫ��(��p=a))
һ������
   p++;
   *p;
p++ʹpָ����һԪ��a[1]������ִ��*p����õ���һ��Ԫ��a[1]��ֵ
����
	*p++;
	����++��*ͬ���ȼ�����Ϸ���Ϊ���Ҷ���������ȼ���*(p++).������p��ֵ��ʵ��*p�����㣬Ȼ����ʹp����1
   ��for(i=0;i<10;i++,p++)  ���Ը�д��  for(i=0;i<10;i++)
	{                                  {
		printf("%d",*p);                    printf("&d",*p++);
	}                                   }
������ȫһ�������ǵ����ö��������*p��ֵ��Ȼ��ʹpֵ��1.������һ��ѭ��ʱ��*p������һ��Ԫ�ص�ֵ
����*(p++)��*(++p)�����ò���ͬ
	ǰ������ȡ*pֵ��Ȼ��ʹp��1����������ʹp��1����ȡ*p.��p�ĳ�ֵΪa(��&a[0]),�����*(p++),�õ�a[0]��ֵ�������*(++p),�õ�a[1]��ֵ
�ġ�++(*p)
	��ʾp��ָ���Ԫ��ֵ��1�����p=a,��++(*p)�൱��++a[0],��a[0]��ֵΪ3������ִ��++(*p)(��++a[0])��a[0]��ֵΪ4.ע�⣺��Ԫ��a[0]��ֵ��1��������ָ��p��ֵ��1
�塢���p��ǰָ��a�����е�i��Ԫ��a[i],��
	*(p--)�൱��a[i--],�ȶ�p���С�*������(��p��ָ���Ԫ�ص�ֵ)����ʹp�Լ�
	*(++p)�൱��a[++i],��ʹp�Լӣ��ٽ��С�*������
	*(--p)�൱��a[--i],��ʹp�Լ����ٽ��С�*������
	��++��--���������ָ�����ʮ����Ч������ʹָ������Զ���ǰ������ƣ�ָ����һ������һ������Ԫ�ء�
	�Ͻ� ���������a�����100��Ԫ�أ�����������ķ�����
	while(p<a+100)
		printf("%d",*p++);
	��
	while(p<a+100)
	{
		printf("%d",*p);
		p++;
	}
*/

//++��Сϰ��
/*#include<stdio.h>
int main()
{
	int a,b,c;
	a=5;
	c=++a;//a=6;c=6
	b=++c,c++,++a,a++;//c=8;b=7;a=8
	b+=a++ + c;//+�����ȼ�����+=����������++a a=9;c=8;b=23(a=8����a=8,Ȼ��a++���9)
	printf("a =%d b=%d c=%d",a,b,c);//9 23 8
	return 0;
}*/
//ͳ�ƶ���������1�ĸ���(��������ģ�����������Ǹ�������������)
/*#include<stdio.h>
//#include<stdlib.h>
int count_bit(int n)
{
	int count=0;
	while(n)
	{
		if(n%2==1)
			count++;
		n=n/2;
	}
	return count;
}
int main()
{
	int a=0;//
	scanf("%d",&a);
	//��дһ�����������������1�ĸ���
	int count=count_bit(a);
	//system("pause");//ϵͳ����ó�����ͣ
	printf("����Ϊ%d\n",count);
	return 0;
}*/
//ͳ�ƶ���������1�ĸ���(ͬ�������ڸ���,��������Ĵ�������޸ĵ�)
/*#include<stdio.h>
int count_bit(unsigned int n)//�������������ĳ��޷����������൱�ڰ�������ֿ���һ�������������
{
	int count=0;
	while(n)
	{
		if(n%2==1)
			count++;
		n=n/2;
	}
	return count;
}
int main()
{
	int a=0;//
	scanf("%d",&a);
	//��дһ�����������������1�ĸ���
	int count=count_bit(a);
	printf("����Ϊ%d\n",count);
	return 0;
}*/
//ͳ�ƶ���������1�ĸ���(������)
/*#include<stdio.h>
int count_bit_one(int a)
{
int count=0;
int i;
for(i=0;i<32;i++)
{
	if(((a>>i)&1)==1)
		count++;
}
return count;
}
int main()
{
	int a=0;
	scanf("%d",&a);
	int count=count_bit_one(a);
	printf("count=%d",count);
	return 0;
}*/
//ͳ�ƶ�������1�ĸ�����������[���ķ���]����λ��&�ķ������ܹ���n���ұߵ�һ��1��ʧ��Ϊ 0��
/*#include<stdio.h>
int main()
{
	int n=13;
	int count=0;
	while(n)
	{
		n=n&(n-1);
		count++;
		printf("%d\n",n);//12 8 0
		//13  1101
		//12  1100
		//8   1000
		//0   0000
		//ÿ�ζ���ʹn�����ұߵ�һ��1��Ϊ0
	}
	printf("%d\n",count);//3 ˵��n�еĶ�������3��1
	return 0;
}*/
//����int����m,n�Ķ����Ʊ�����ж��ٸ���ͬλ
/*#include<stdio.h>
int count_bit_one(int a)
{
int count=0;
int i;
for(i=0;i<32;i++)
{
	if(((a>>i)&1)==1)
		count++;
}
return count;
}
int get_diff_bit(int m,int n)
{
	int tmp=m^n;//0111 1100 1111
	int count=0;//1011 1011 0111
	//return count_bit_one(tmp);
	while(tmp)
	{
		tmp=tmp&(tmp-1);
			count++;
	}
	return count;
}
int main()
{
	int m=0;
	int n=0;
	int count;
	scanf("%d%d",&m,&n);
	count=get_diff_bit(m,n);
	printf("count=%d\n",count);
	return 0;
}*/
//��ȡһ���������������������е�ż��λ������λ���ֱ��ӡ����
/*#include<stdio.h>
void print(int m)
{
	int i;
	printf("����λ��\n");
	for(i=30;i>=0;i-=2)
		printf("%d ",(m>>i)&1);
	printf("\n");
	printf("ż��λ��\n");
	for(i=31;i>=1;i-=2)
		printf("%d ",(m>>i)&1);
	printf("\n");
}
int main()
{
	int m;
	printf("�������������������\n");
	scanf("%d",&m);
	print(m);
	return 0;
}*/

//����һ���ַ�������ָ���ķ���ɾ��
/*#include<stdio.h>
int main()
{
	void enter(char a[]);
	void deletestr(char a[],char m);
	void print(char a[]);
	char a[80];
	char m=' ';
	//printf("��������Ҫɾ�����ַ�\n");
	//scanf("%s",m);
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
	printf("��Ҫɾ�����ַ�Ϊ�� ��\n");
	for(i=0,j=0;a[i]!='\0';i++)
	{
		if(a[i]!=m)
			a[j++]=a[i];
	}
}
void print(char a[])
{
	int i;
	printf("ɾ��������ַ���Ϊ\n");
	for(i=0;a[i]!='\0';i++)
		printf("%c",a[i]);
}*/