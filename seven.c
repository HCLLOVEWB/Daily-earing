//操作符属性
/*#include<stdio.h>
int main()
{
	int a=10;
	int b=20;
	int c=b+a*3;//当相邻优先级不相同的时候，优先级高的先算
	a*b+c*d+e*f;//这个表达式是有问题的
	//因为由于*比+的优先级高，只能保证*的计算比+早，但是优先级并不能决定第三个*比第一个+早执行
	c+--c;
	同上，操作符的优先级只能决定自减--在+运算符的前面，但是我们并没有办法得知，+操作符的左操作符的获取是在右操作符之前还是之后求值，所以结果是不可预测的，是有歧义的
	return 0;
}*/
//非法表达式
/*#include<stdio.h>
int main()
{
	int i=10;
	i= i-- - --i*(i=-3)*i++ = ++i;
	//不同编译器中的表达式的值是不一样的，所以是非法表达式，我们写的表达式必须是要有唯一值
	printf("i=%d\n",i);
	return 0;
}*/
//
//指针练习1
/*#include<stdio.h>
int main()
{
	//32位指针大小为4个字节 64位的指针大小为8个字节
	//printf("%d\n",sizeof(char*));//4
	//printf("%d\n",sizeof(short*));//4
	//printf("%d\n",sizeof(int*));//4
	//printf("%d\n",sizeof(double*));//4
	int a=0x11223344;
	//一个字节有8个比特位 十六进制的F相当于二进制的1111
	//1个字节是8位，二进制8位：xxxxxxxx 范围从00000000－11111111，表示0到255。一位16进制数（用二进制表示是xxxx）最多只表示到15（即对应16进制的F），要表示到255,就还需要第二位。所以1个字节＝2个16进制字符，一个16进制位＝0.5个字节。
	int* pa=&a;
	char* pb=&a;
	printf("%p\n",pa);//pa和pb都是指针变量都是四个字节都能很好的存放a
	printf("%p\n",pb);
	return 0;
}*/
//指针类型的解引用操作
/*#include<stdio.h>
int main()
{
	int a=0x11223344;//a的内存为44332211
	//int* pb=&a;//pb能够改变a的内存为00000000
	//*pb=0;//pb和pc是有区别的
	char* pc=&a;//pc改变a的内存为00332211
	*pc=0;
	//指针类型决定了指针进行解引用操作的时候，能够访问空间的大小
	//int* p;*p能够访问4个字节
	//char* p；*p能够访问一个字节
	//double* p;*p能够访问8个字节
	return 0;
}*/
//指针类型决定了：指针走一步走多远，就是指针的步长
/*#include<stdio.h>
int main()
{
	int a=0x11223344;
	//int* pa=&a;
	char* pb=&a;
	//printf("%p\n",pa);//00B3FE68
	//printf("%p\n",pa+1);//00B3FE6C 多增加了4个字节
	printf("%p\n",pb);
	printf("%p\n",pb+1);//比上面的多了一个字节
	//int* p;p+1-->4
	//char* p;p+1-->1
	//double* p;p-->8(这就是步长)
	return 0;
}*/
//指针步长的相关小练习
/*#include<stdio.h>
int main()
{
	int arr[5]={0,1,2,3,4};
	int* p=arr;//数组名-首元素的地址
	//char* p=arr;//循环十次相当于是十个字节，而arr有40个字节（相当于把两个半数组（十个字节）变成1）
	int i=0;
	printf("%p\n",arr);
	printf("%p\n",arr+1);
	printf("%p\n",p);
	printf("%p\n",p+1);
	//for(i=0;i<10;i++)
	//{
	//	*(p+i)=1;//int* p *(p+1)向后跳4个字节；char* p *(p+1)向后跳1个字节
	//}
	return 0;
}*/
//野指针
//（野指针是指指针指向的位置是不可知的（随机的，不正确的，没有明确限制的））
//野指针形成的原因一：局部变量不初始化，默认是随机值
/*#include<stdio.h>
int main()
{
	int a;//局部变量不初始化，默认是随机值
	int* p;//局部指针变量，就被初始化随机值
	//int* p=&a;
	*p=20;//相当于随机的一个地址里面存放20
	//报错 使用了未初始化的局部变量
	return 0;
}*/
//野指针形成原因二（指针越界访问）
/*#include<stdio.h>
int main()
{
	int arr[10]={0};
	int* p=arr;
	int i=0;
	for(i=0;i<12;i++)
	{
		//*p=i;
		//p++;//超出数组内存，已经到了数组后面的，已经跃出了arr管理的范围就被称为野指针
		//可以写成下面这种形式
		*p++=i;//先解引用，然后再++
	}
	return 0;
}*/
//关于数组和指针的一些小细节
/*#include<stdio.h>
int main()
{
	int arr[10]={0};
	int b=0;
	int* p=arr;//数组本身就可以传址
	int* d=&b;
	return 0;
}*/
//野指针形成原因三（指针指向的空间释放）
/*#include<stdio.h>
int* test()//局部变量（进入他的空间创建，出了它的范围就销毁，销毁就意味着这个内存空间还给了操作系统，不属于编译器了）
{
	int a=10;
	return(&a);
}
int main()
{
	int* p=test();
	*p=20;//将刚刚局部变量的地址中找到内存存入值，但是这块内存空间已经不属于现在运行的程序了

	return 0;
}*/
//指针指向NULL
/*#include<stdio.h>
int main()
{
	//int a=10;
	//int* pa=&a;//初始化
	//int* p=NULL;//NULL是用来初始化指针的，给指针赋值
	//相当于 int b=0; int* p=&b;
	
	int a=10;
	int* pa=&a;
	*pa=20;
	pa=NULL;//假设变量a已经操作好了，pa指针已经不打算用了，可以把pa指针设为NULL（空），就不指向任何空间了，就不会干扰变量a了（避免pa成为野指针）
	return 0;
}*/
//指针使用之前检查有效性
/*#include<stdio.h>
int main()
{
	int a=10;
	int* pa=&a;
	*pa=20;
	pa=NULL;
	*pa=10;//因为pa指针已经设为NULL所以不能访问他
	if(pa!=NULL)
	{
	//不等于NULL的时候这个指针才可以使用
	}
	return 0;
}*/
//指针的练习2
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
//指针计算
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
		pa=pa+1;//向后跳一个整形 相当于p++
	}
#endif
	for(i=1;i<5;i++)
	{
		printf("%d ",*pb);
		pb-=2;
	}
	return 0;
}*/
//指针+-整数 //指针的关系运算
/*#include<stdio.h>
#define N_VALUES 5
int main()
{
	float values[N_VALUES];
	float* vp;
	//指针+-整数  指针的关系运算
	for(vp=&values[0];vp<&values[N_VALUES];)//for的第二个条件语句中指针也可以比较大小
	{
		*vp++=0;
	}
}*/
//指针-指针
/*#include<stdio.h>
int main()
{
	char ch[5]={0};
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	printf("%d\n",&arr[9]-&arr[0]);//9 指针减去指针得到的是中间元素的个数
	printf("%d\n",&arr[0]-&arr[9]);//-9
	printf("%d\n",&arr[9]-&ch[0]);//是错误的，不可估量的值；必须是同一个数组
	return 0;
}*/
//用指针求字符串长度
/*#include<stdio.h>
int my_strlen(char* str)
{
	char* start=str;//指向的是首地址
	char* end=str;//指向的是首地址
	while(*end!='\0')//通过循环使end指针不断向后移，直到找到‘\0’
	{
		end++;
	}
	return (end-start);//相减得到字符串长度
}
int main()
{
	char arr[]="bit";//bit\0
	int len=my_strlen(arr);
	printf("%d",len);
	return 0;
}*/
//指针的关系运算
/*#include<stdio.h>
#define N_VALUES 5
int main()
{
	float values[N_VALUES];
	float* vp;
	//两种写法达到同样的作用
	//但是在写代码的时候最好写上面的
	//因为下面的方法在绝大多数编译器下可以执行，但是标准并不能保证他可行
	//标准规定：允许指向数组元素的指针与指向数组最后一个元素后面的那个内存位置的指针比较，
	//上接：但是不允许与指向第一个元素之前的那个内存位置的指针进行比较
#if 0
	for(vp=&values[N_VALUES];vp>&values[0];)//第二个条件是指针比较大小；没有第三个条件，所以就直接判断第二个条件
	{
		*--vp=0;//vp指针一直向前挪动
	}
#endif
	for(vp=&values[N_VALUES-1];vp>=&values[0];vp--)
	{
		*vp=0;
	}
	return 0;
}*/
//数组和指针
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
		//printf("%d ",arr[i]);//数组的方式打印出来为0 1 2 3 4 5 6 7 8 9
		printf("%d ",*(p+i));//指针的方法打印数组
	}
#if 0
	for(i=0;i<10;i++)
	{
		printf("%p========%p\n",p+i,&arr[i]);//发现地址是一样的
	}
#endif

	return 0;
}*/
//二级指针
/*#include<stdio.h>
int main()
{
	int a=10;
	int* pa=&a;
	int** ppa=&pa;//ppa就是二级指针
	int*** pppa=&ppa;//pppa是三级指针
	**ppa=20;
	printf("%d\n",**ppa);//20
	printf("%d\n",*pa);//20
	printf("%d\n",a);//20
	return 0;
}*/
//指针数组本质是指针  是存放指针的数组
//数组指针本质是指针
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
	int* arr[3]={&a,&b,&c};//这就是一个指针数组，里面存放的每一个元素都是指针
	for(i=0;i<3;i++)
	{
		printf("%d\n",*(arr[i]));//10 20 30
	}
	return 0;
}*/