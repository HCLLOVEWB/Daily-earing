//输入一个字符串，将指定的符号删除
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
	printf("请输入一个字符串\n");
	gets(a);
	int i;
	for(i=0;a[i]!='\0';i++)
	{}
	printf("这个字符串长度为%d\n",i);
}
void deletestr(char a[],char m)
{
	int i,j;
	printf("需要删除的字符是“ ”");
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
	printf("删除过后的字符串为\n");
	for(i=0;a[i]!='\0';i++)
		printf("%c",a[i]);
}*/
//将数组元素逆序返回（采用对应一前一后对调的形式）
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
	//Init(arr,sz);//将元素初始化为0
	printf(arr,sz);
	peverse(arr,sz);
	printf(arr,sz);
	return 0;
}*/
//两个数组进行交换
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
//有关指针的有趣小练习
/*#include<stdio.h>
int main()
{
	int arr[]={1,2,3,4,5};
	short* p=(short*)arr;//short* 每次操作两个字节 将arr强制转换成short* 并赋值给p
	int i=0;//所以short*p占两个字节，p+1的时候步长也是2个字节
	for(i=0;i<4;i++)//当i=0的时候*(p+0)=0,只会将arr[0]的1的前两个字节变为0；再循环一次，i=1的时候步长加2，将arr[0]的后两个字节也变成了0
	{
		*(p+i)=0;//四次循环，也只是将1和2变成了0
	}
	for(i=0;i<4;i++)
	{
		printf("%d",arr[i]);//0 0 3 4 5 
	}
	return 0;
}*/
//有关指针的有趣小练习
/*#include<stdio.h>
int main()
{
	int a=0x11223344;//在内存块中是倒着存放的 为44 33 22 11 一共四个字节，44占一个字节 33占一个字节以此类推
	char *pc=(char*)&a;//由于pc是char*类型 所以*pc在操作的时候只能操作一个字节
	*pc=0;//由于存放的 为44 33 22 11；pc只操作一个字节，所以改为00 33 22 11
	printf("%x\n",a);//输出来的时候再倒回去 所以输出a的十六进制为11223300
	return 0;
}*/
//sizeof返回的一个数是无符号数，在与变量计算或者比较的时候，会将变量转化成无符号数
/*#include<stdio.h>
int i;//i是全局变量，全局变量不初始化就默认是0
int main()
{
	i--;
	if(i>sizeof(i))//sizeof是计算变量、类型所占内存的大小(大小一般是恒大于等于0的，一般都是无符号数是大于等于0的)
	{//sizeof计算之后返回的类型的值是无符号数 当一个整数(i=-1)和一个无符号数(sizeof(i))计算或者比较大小的时候，会先把整形(i=-1)转换成无符号数
	//-1的补码是111111111111111111111111，转换成无符号数的时候把符号位不看成符号位，所以看成正数
	//1111111111111111111111就是原码，是4,294,967,295；因为正数的补码反码源码都是一样的，所以这个数非常的大，所以就返回>
		printf(">\n");
	}
	else
	{
		printf("<\n");
	}
	return 0;//结果输出>
}*/
//指针变量交换两个变量值(错误示例)
//C语言中实参变量和形参变量之间的数值传递是单向的值传递方式，用指针变量做函数参数时同样要遵循这一规则。不可能通过执行调用函数来改变实参指针变量的值，但是可以改变实参指针变量所指变量的值
/*#include<stdio.h>
int main()
{
    void switc(int* pa,int* pb);
	int a;
	int b;
	printf("请输入两个数\n");
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