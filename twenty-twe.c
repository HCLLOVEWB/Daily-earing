/*#include<stdio.h>
void printf1(int arr[3][5],int x,int y)//参数是数组的形式
{
	int i=0;
	for(i=0;i<x;i++)
	{	
		int j=0;
		for(j=0;j<y;j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
}*/
//arr是一个三行五列的数组，把他想象成一个有三个元素的一维数组(第一行是一个元素，第二行是一个元素，第三行是一个元素)
//数组名是首元素地址的时候就是第一行的地址(第一行一维数组的地址)，第一行有是一个一维数组，又有五个元素
//因为p是一个指向数组的指针(指向整形的时候加1跳过一个整形(4个字节))，指向数组的时候加1跳过一个数组(因为这个数组是五个元素，所以跳过五个元素，指向了第二行)
/*void printf2(int(*p)[5],int x,int y)//参数是指针的形式 p指针指向的是每一行一维数组的指针，因为是三行五列，所以有
{
	int i=0;
	for(i=0;i<x;i++)//加0指向当前行，加1跳过一行，加2跳过两行
	{
		//*（p+i）相当于找到了这一行的数组名
		//*（p+i）+j找到了下表元素为j的地址
		//*(*(p+i)+j)找到了i行j列的元素
		int j=0;
		for(j=0;j<y;j++)
		{
			//printf("%d",p[i][j]);
			//printf("%d",*(p[i]+j));
			//printf("%d",*(*(p+i)+j));
			printf("%d ",(*(p+i))[j]);
		}
		printf("\n");
	}
}
int mian()
{
	int arr[3][5]={{1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7}};
	printf1(arr,3,5);//数组名--数组名就是首元素地址
	printf2(arr,3,5);
#if 0
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	int i=0;
	int* p=arr;
	for(i=0;i<10;i++)
	{
		printf("%d",p[i]);
		printf("%d",*(p+i));
		printf("%d",*(arr+i));
		printf("%d",arr[i]);//arr[i]==*(arr+i)==*(p+i)==p{i}
	}
#endif
	return 0;
}*/
/*int arr[5];           //arr是一个有5个元素的整型数组
int *parr1[10];       //parr1是一个数组，数组有10个元素，每个元素的类型是int*,parr1是指针数组
int (*parr2)[10];     //parr2是一个指针，该指针指向一个数组，数组有十个元素，每个元素的类型是int,parr2是数组指针
int (*parr3[10])[5];  //parr3是一个数组,该数组有十个元素，每个元素是一个数组指针，该数组指针指向的数组有五个元素，每个元素的类型是int
                      //例如 int arr[10],将arr[10]取出，剩下的是数组类型(int);int (*parr3[10])[5]，是数组，将parr3[10]取出后剩下的就是类型，int(*)[5](每个元素是一个指针，指向的是五个元素的数组)
#include<stdio.h>
int main()
{
	char ch='w';
	char* p=&ch;
	const char* p2="abcdef";//实际上是将字符串的首地址交给了p2(p2通过地址找到a就能找到字符串,字符串不允许被修改，所以在前面加上count)
	//数组指针-数组-存放指针的数组
	int* arr[10];
	char* ch[5];
	//数组指针
	//int* p3;//整形指针-指向整形的指针
	//char* p4;//字符指针-指向字符的指针
	int arr2[5];//数组
	int (*pa)[5]=&arr2;//取出数组的地址存放在pa，pa就是一个数组指针
	return 0;
}*/

