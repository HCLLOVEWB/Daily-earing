//������Ԫ�ص�ַ�����������ַ����ϰ
/*#include<stdio.h>
int main()
{
	int arr[]={1,2,3,4,5,6,7};
	printf("%p\n",arr);//009FFDE4  ��Ԫ�ص�ַ
	printf("%p\n",arr+1);//009FFDE8 �����ĸ��ֽ�
	printf("%p\n",&arr[0]);//009FFDE4  ��Ԫ�ص�ַ
	printf("%p\n",&arr[0]+1);//009FFDE8 ����һ��Ԫ���ĸ��ֽ�
	printf("%p\n",&arr);//009FFDE4  ����Ԫ�صĵ�ַ
	printf("%p\n",&arr+1);//009FFE00 �����߸�Ԫ�ص��ֽڣ�7*4=28 Ҳ���Ǽ���28
	//sizeof(������)�������������Ĵ�С��sizeof�ڲ�������һ������������������ʾ��������
	//&��������ȡ����������ĵ�ַ����������ʾ��������
	//�������������֮�⣬���е�����������ʾ������Ԫ�ص�ַ
	return 0;
}*/
//�����̽����ϰ
/*#include<stdio.h>
#include<string>
int main()
{
	char a[]={'a','b','c'};
	char b[]={'a',96,'c'};
	char c[]="abc";//������ô�����ַ���char c[]="a,b,c"����ѡ�����Ҳ���ȥ
	char d[]="a96b";
	int e[]={1,2,3};
	printf("sizeof char a[10]={'a','b','c'}=%d\n",sizeof(a));//3  sizeof�Ǳ�ʾ���ٿռ�Ĵ�С������\0  ʣ��7���ռ䶼��0��ȫ
	printf("strlen char a[10]={'a','b','c'}=%d\n",strlen(a));//����3�������������\0ֹͣ��������\0   ʣ��7���ռ䶼��0��ȫ
	printf("sizeof char b[10]={'a',96,'c'}=%d\n",sizeof(b));//3   ʣ��7���ռ䶼��0��ȫ
	printf("strlen char b[10]={'a',96,'c'}=%d\n",strlen(b));//����3�������  ʣ��7���ռ䶼��0��ȫ
	printf("sizeof char c[10]=��abc��=%d\n",sizeof(c));//4  a,b,c,\0,ʣ��6���ռ䶼��0��ȫ������\0�ڴ洢��Ҳ��0�洢 ��ʾΪa b c 0(�������\0) 0 0 0 0 0 0
	printf("strlen char c[10]=��abc��=%d\n",strlen(c));//3
	printf("sizeof char d[10]=��a96b��=%d\n",sizeof(d));//5//��96�ֿ��ˣ��ֳ���9��6
	printf("strlen char d[10]=��a96b��=%d\n",strlen(d));//4//ͬ��
	printf("sizeof int e[10]={1,2,3}=%d\n",sizeof(e));//12 //��Ϊsizeof����ǿ��ٿռ�Ĵ�С��int����ռ4���ֽڣ�������������ռ12���ֽ� ֻ���ַ�������\0����
	printf("sizeof(e)/sizeof(e[0])=%d",sizeof(e)/sizeof(e[0]));
	//printf("strlen int e[10]={1,2,3}=%d",strlen(e));����ǲ��Եģ���Ϊint e[10]={1,2,3}�����ַ���
	return 0;
}*/
//�����С��ϰ
/*#include<stdio.h>
void test1(int arr[])
	{
	printf("%d\n",sizeof(arr));
	}
void test2(char ch[])
{
	printf("%d\n",sizeof(ch));
}
int main()
{
	int arr[10]={0};
	char ch[10]={0};
	printf("%d\n",sizeof(arr));//40
	printf("%d\n",sizeof(ch));//10
	test1(arr);//4/8 ��Ϊ����ȥ������Ԫ�صĵ�ַ��������Ҫ��ָ�������գ�arr��ch��ָ�룬�����൱�ڼ������ָ��Ĵ�С
	test2(ch);//4/8
	return 0;
}*/
//�߼����߼������ϰ
/*#include<stdio.h>
int main()
{
	int a=0;
	int b=3;
	int c=a&&b;//�߼��� 0
	int d=a||b;//�߼��� 1
	printf("%d\n",c);
	printf("%d\n",d);
	return 0;
}*/
//�߼�����߼����С��ϰ��
/*#include<stdio.h>
int main()
{
	int i=0,a=0,b=2,c=3,d=4;
	//�߼��������&&ֻҪ�����ǰ���Ǽ٣����涼������
	//i=a++&&++b&&d++;//a���ú�ӣ�����a=0������0&&�κ�һ��������0�����Ժ��治�ټ��㣬����b,d��ֵ���ı�
	i=a++||++b||d++; //1 3 3 4 1 a++���ú�ӣ�����a��0�������ٿ�++b,����++b�ȼӺ��ã�����b��3�����ԾͲ��ü������������
	printf("a=%d b=%d c=%d d=%d i=%d\n",a,b,c,d,i);
	//printf("a=%d b=%d c=%d d=%d i=%d\n",a,b,c,d,i);//&&�Ľ����1 2 3 4 0 ||�Ľ����1 3 3 4 1 
	
	int w=0,e=1,f=2,j=3,h=4;
	//w=e++&&++f&&h++;
	w=e++||++f||h++;//2 2 3 4 1 e++���ú�ӣ�����e��1�����ԾͲ���Ҫ�������������
	printf("e=%d f=%d j=%d h=%d w=%d\n",e,f,j,h,w);//2 3 3 5 1
	return 0;
}*/