//数组首元素地址和整个数组地址的练习
/*#include<stdio.h>
int main()
{
	int arr[]={1,2,3,4,5,6,7};
	printf("%p\n",arr);//009FFDE4  首元素地址
	printf("%p\n",arr+1);//009FFDE8 加了四个字节
	printf("%p\n",&arr[0]);//009FFDE4  首元素地址
	printf("%p\n",&arr[0]+1);//009FFDE8 加了一个元素四个字节
	printf("%p\n",&arr);//009FFDE4  整个元素的地址
	printf("%p\n",&arr+1);//009FFE00 加了七个元素的字节，7*4=28 也就是加了28
	//sizeof(数组名)，计算的是数组的大小，sizeof内部单独放一个数组名，数组名表示整个数组
	//&数组名，取出的是数组的地址，数组名表示整个数组
	//除以上两种情况之外，所有的数组名都表示数组首元素地址
	return 0;
}*/
//数组的探索练习
/*#include<stdio.h>
#include<string>
int main()
{
	char a[]={'a','b','c'};
	char b[]={'a',96,'c'};
	char c[]="abc";//不能这么创建字符串char c[]="a,b,c"，会把‘，’也算进去
	char d[]="a96b";
	int e[]={1,2,3};
	printf("sizeof char a[10]={'a','b','c'}=%d\n",sizeof(a));//3  sizeof是表示开辟空间的大小，包括\0  剩余7个空间都用0补全
	printf("strlen char a[10]={'a','b','c'}=%d\n",strlen(a));//大于3的随机数，遇到\0停止，不包括\0   剩余7个空间都用0补全
	printf("sizeof char b[10]={'a',96,'c'}=%d\n",sizeof(b));//3   剩余7个空间都用0补全
	printf("strlen char b[10]={'a',96,'c'}=%d\n",strlen(b));//大于3的随机数  剩余7个空间都用0补全
	printf("sizeof char c[10]=“abc”=%d\n",sizeof(c));//4  a,b,c,\0,剩余6个空间都用0补全，但是\0在存储中也以0存储 表示为a b c 0(这个代表\0) 0 0 0 0 0 0
	printf("strlen char c[10]=“abc”=%d\n",strlen(c));//3
	printf("sizeof char d[10]=“a96b”=%d\n",sizeof(d));//5//把96分开了，分成了9和6
	printf("strlen char d[10]=“a96b”=%d\n",strlen(d));//4//同上
	printf("sizeof int e[10]={1,2,3}=%d\n",sizeof(e));//12 //因为sizeof算的是开辟空间的大小，int类型占4个字节，三个数字所以占12个字节 只有字符串才有\0结束
	printf("sizeof(e)/sizeof(e[0])=%d",sizeof(e)/sizeof(e[0]));
	//printf("strlen int e[10]={1,2,3}=%d",strlen(e));这个是不对的，因为int e[10]={1,2,3}不是字符串
	return 0;
}*/
//数组的小练习
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
	test1(arr);//4/8 因为传过去的是首元素的地址，所以需要用指针来接收，arr和ch是指针，所以相当于计算的是指针的大小
	test2(ch);//4/8
	return 0;
}*/
//逻辑与逻辑或的练习
/*#include<stdio.h>
int main()
{
	int a=0;
	int b=3;
	int c=a&&b;//逻辑与 0
	int d=a||b;//逻辑或 1
	printf("%d\n",c);
	printf("%d\n",d);
	return 0;
}*/
//逻辑与和逻辑或的小练习题
/*#include<stdio.h>
int main()
{
	int i=0,a=0,b=2,c=3,d=4;
	//逻辑与操作符&&只要算出来前面是假，后面都不算了
	//i=a++&&++b&&d++;//a先用后加，所以a=0，由于0&&任何一个数都是0，所以后面不再计算，所以b,d的值不改变
	i=a++||++b||d++; //1 3 3 4 1 a++先用后加，由于a是0，所以再看++b,由于++b先加后用，所以b是3，所以就不用继续往后计算了
	printf("a=%d b=%d c=%d d=%d i=%d\n",a,b,c,d,i);
	//printf("a=%d b=%d c=%d d=%d i=%d\n",a,b,c,d,i);//&&的结果是1 2 3 4 0 ||的结果是1 3 3 4 1 
	
	int w=0,e=1,f=2,j=3,h=4;
	//w=e++&&++f&&h++;
	w=e++||++f||h++;//2 2 3 4 1 e++先用后加，由于e是1，所以就不需要继续往后计算了
	printf("e=%d f=%d j=%d h=%d w=%d\n",e,f,j,h,w);//2 3 3 5 1
	return 0;
}*/