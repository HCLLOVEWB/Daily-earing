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
//指针变量交换两个变量值一(通过改变实参指针变量所指变量的值实现)
/*#include<stdio.h>
int main()
{
	void swap(int* pa,int* pb);
	int a,b;
	printf("请输入a和b\n");
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
//指针变量交换两个变量值二(通过第三个指针变量，交换指针变量的值实现)
/*#include<stdio.h>
int main()
{
	int a,b;
	printf("请输入a和b\n");
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
//指针变量交换两个变量值三()
/*#include<stdio.h>
int main()
{
	void swap(int* pa,int* pb);
	int a,b;
	printf("请输入a和b\n");
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
	*tmp=*pa;//此语句有问题 *pa就是;而*temp是指针变量temp所指向的变量。但由于未给temp赋值，因此temp中并无确定的值（它的值是不可预见的），所以temp所指的单元也是不可预见的
	*pa=*pb;//所以对*temp赋值就是对一个未知的存储单元赋值，而这个未知的存储单元中可能存储着一个有用的数据，这样就有可能破坏系统的正常工作状态
	*pb=*tmp;
#endif
	//int temp;//应该将*pa的值赋给与*pa相同类型的变量，在本题中用整型变量temp作为临时辅助变量实现*pa和*pb的交换
	//temp=*pa;
	//*pa=*pb;
	//*pb=temp;
	int* temp;//这样也是可以的，必须要给temp指针赋初值，不然会变成野指针
	int a=0;
	temp=&a;
	*temp=*pa;
	*pa=*pb;
	*pb=*temp;
}*/
//使用指针打印数组
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
//使用指针打印数组的小坑
/*#include<stdio.h>
int main()
{
	int *p,i,a[10];
	p=a;
	printf("请输入十个数字\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",p++);
	}
	//p=a;必须得在第一个for循环之后加上此语句，因为因为经过第一个for循环读入数据之后，p已指向a数组的末尾，因此在指向第二个for循环时，P的起始值不是&a[0]了而是a+10.
	   //由于执行第二个for循环的时候，每次要执行p++，因此p指向的是a数组下面的10个存储单元
	for(i=0;i<10;i++,p++)
	{
		printf("%d",*p);
	}
	printf("\n");
	return 0;
}*/
/*当指针指向数组元素时，指针变量可以带下标。因为在程序编译的时候，对下表的处理方法是转换为地址的，对p[i]处理成*(p+1),如果p是指向1个数组元素a[0]，则p[i]代表a[i].
但是必须弄清楚p的当前值是什么，如果当前p指向a[3]，则p[2]并不代表a[2],而是a[3+2]，即a[5](建议少用这些容易出错的方法)
分析下面几种情况(设p开始指向数组a的首元素(即p=a))
一、分析
   p++;
   *p;
p++使p指向下一元素a[1]。若再执行*p，则得到下一个元素a[1]的值
二、
	*p++;
	由于++和*同优先级，结合方向为自右而左，因此它等价于*(p++).先引用p的值，实现*p的运算，然后再使p自增1
   如for(i=0;i<10;i++,p++)  可以改写成  for(i=0;i<10;i++)
	{                                  {
		printf("%d",*p);                    printf("&d",*p++);
	}                                   }
作用完全一样。他们的作用都是先输出*p的值，然后使p值加1.这样下一次循环时，*p就是下一个元素的值
三、*(p++)与*(++p)的作用不相同
	前者是先取*p值，然后使p加1，后者是先使p加1，再取*p.若p的初值为a(即&a[0]),若输出*(p++),得到a[0]的值。而输出*(++p),得到a[1]的值
四、++(*p)
	表示p所指向的元素值加1，如果p=a,则++(*p)相当于++a[0],若a[0]的值为3，则在执行++(*p)(即++a[0])后a[0]的值为4.注意：是元素a[0]的值加1，而不是指针p的值加1
五、如果p当前指向a数组中第i个元素a[i],则：
	*(p--)相当于a[i--],先对p进行“*”运算(求p所指向的元素的值)，再使p自减
	*(++p)相当于a[++i],先使p自加，再进行“*”运算
	*(--p)相当于a[--i],先使p自减，再进行“*”运算
	将++和--运算符用于指针变量十分有效，可以使指针变量自动向前或向后移，指向下一个或上一个数组元素。
	上接 例如想输出a数组的100个元素，可以用下面的方法：
	while(p<a+100)
		printf("%d",*p++);
	或
	while(p<a+100)
	{
		printf("%d",*p);
		p++;
	}
*/

//++的小习题
/*#include<stdio.h>
int main()
{
	int a,b,c;
	a=5;
	c=++a;//a=6;c=6
	b=++c,c++,++a,a++;//c=8;b=7;a=8
	b+=a++ + c;//+的优先级高于+=；所以先算++a a=9;c=8;b=23(a=8先用a=8,然后a++变成9)
	printf("a =%d b=%d c=%d",a,b,c);//9 23 8
	return 0;
}*/
//统计二进制数的1的个数(是有问题的，如果给出的是负数将会有问题)
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
	//编写一个函数来计算二进制1的个数
	int count=count_bit(a);
	//system("pause");//系统命令：让程序暂停
	printf("个数为%d\n",count);
	return 0;
}*/
//统计二进制数的1的个数(同样适用于负数,根据上面的代表进行修改的)
/*#include<stdio.h>
int count_bit(unsigned int n)//将负数传过来改成无符号数，就相当于把这个数字看成一个超级大的正数
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
	//编写一个函数来计算二进制1的个数
	int count=count_bit(a);
	printf("个数为%d\n",count);
	return 0;
}*/
//统计二进制数的1的个数(方法二)
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
//统计二进制数1的个数（方法三[最精简的方法]）按位与&的方法（能够让n最右边的一个1消失变为 0）
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
		//每次都会使n的最右边的一个1变为0
	}
	printf("%d\n",count);//3 说明n中的二进制有3个1
	return 0;
}*/
//两个int整数m,n的二进制表达中有多少个不同位
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
//获取一个整数二进制序列中所有的偶数位和奇数位，分别打印出来
/*#include<stdio.h>
void print(int m)
{
	int i;
	printf("奇数位数\n");
	for(i=30;i>=0;i-=2)
		printf("%d ",(m>>i)&1);
	printf("\n");
	printf("偶数位数\n");
	for(i=31;i>=1;i-=2)
		printf("%d ",(m>>i)&1);
	printf("\n");
}
int main()
{
	int m;
	printf("请输入你想输入的数字\n");
	scanf("%d",&m);
	print(m);
	return 0;
}*/

//输入一个字符串，将指定的符号删除
/*#include<stdio.h>
int main()
{
	void enter(char a[]);
	void deletestr(char a[],char m);
	void print(char a[]);
	char a[80];
	char m=' ';
	//printf("请输入你要删除的字符\n");
	//scanf("%s",m);
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
	printf("想要删除的字符为‘ ’\n");
	for(i=0,j=0;a[i]!='\0';i++)
	{
		if(a[i]!=m)
			a[j++]=a[i];
	}
}
void print(char a[])
{
	int i;
	printf("删除过后的字符串为\n");
	for(i=0;a[i]!='\0';i++)
		printf("%c",a[i]);
}*/