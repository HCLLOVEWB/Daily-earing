//stelen函数的优化
/*#include<stdio.h>
#include<assert.h>
int my_strlen(const char* arr)//保证arr中的字符串不会被改变
{
	int count=0;
	assert(arr!=NULL);//保证指针的有效性
	while(*arr!='\0')
	{
		count++;
		arr++;
	}
	return count;
}
int main()
{
	char arr[]="abcdef";
	int len=my_strlen(arr);
	printf("%d\n",len);
	return 0;
}*/
//写一个递归函数，使得输入一个非负整数，返回组成他的数字之和
/*#include<stdio.h>
int DigitSum(int num)
{
	if(num>9)
	{
		return (DigitSum(num/10)+num%10);
	}
	else
		return num;
}
int main()
{
	int num;
	printf("请输入一个数字\n");
	scanf("%d",&num);
	int sum=DigitSum(num);
	printf("%d\n",sum);
	return 0;
}*/
//实现n的k次方,用递归来实现
/*#include<stdio.h>
double Pow(int num,int k)
{
	if(k<0)
	{
		return(1.0/(Pow(num,-k)));
	}
	else if(k==0)
		return 1;
	else
	{
		if(k>1)
	   {
		return Pow(num,k-1)*num;
	   }
	    else
		return num;
	}
	
}
int main()
{
	int num,k;
	printf("请输入一个数字\n");
	scanf("%d",&num);
	printf("请输入你想得到几次方\n");
	scanf("%d",&k);
	double ret=Pow(num,k);
	printf("%lf\n",ret,k);
	return 0;
}*/