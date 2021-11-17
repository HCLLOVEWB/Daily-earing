//引用数组中各元素的值有三种方法
//一、下标法
/*#include<stdio.h>
int main()
{
	int a[10];
	int i;
	printf("请输入10个数字\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("输出的数字为\n");
	for(i=0;i<10;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
	return 0;
}*/
//二、地址法 通过数组名计算数组元素地址，找出元素的值
/*#include<stdio.h>
int main()
{
	int a[10];
	int i;
	printf("请输入10个数字\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);//&a[i]表示a[i]元素的地址，也可以改用(a+i)表示  即scanf("%d",a+i)
	}
	printf("输出的数字为\n");
	for(i=0;i<10;i++)
	{
		printf("%d ",*(a+i));
		printf("\n");
	}
	return 0;
}*/
//三、指针变量的方法 用指针变量指向数组元素
/*#include<stdio.h>
int main()
{
	int a[10];
	int i;
	int* p;
	printf("请输入10个数字\n");
#if 0
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
#endif
	for(p=a;p<(a+10);p++)
	{
		scanf("%d",p);
	}
	for(p=a;p<(a+10);p++)
	{
		printf("%d ",*p);
	}
	printf("\n");
	return 0;
}*/
//方法一和方法二的执行效率是相同的。C编译系统是将a[i]转换成*(a+i)处理的，即先计算元素地址。因此用方法一和方法二找数组元素费时较多
//第三种方法比一二方法较快，用指针变量直接指向元素，不必每次都重新计算地址，像p++这样的操作是比较快的，这种有规律的改变地址值(p++)能大大提高执行效率