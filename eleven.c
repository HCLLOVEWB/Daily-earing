//将参数字符串中的字符反向排序（要求：不能使用C函数库中的字符串操作函数）
//例如a="a,b,c,d,e"将a变为a="e,d,c,b,a",不是简单的逆序打印
/*#include<stdio.h>
void reverse_string(char arr[],int sz)
{
	int left=0;
	int right=sz-1;
	int temp,i;
	for(i=0;i<sz;i++)
	{
		if(left<right)
		{
			temp=arr[left];
			arr[left]=arr[right];
			arr[right]=temp;
			left++;
			right--;
		}
	}
}
int main()
{
	char arr[]="abcdefg";
	int i;
#if 0
	printf("请输入一个字符型字符串\n");
	for(i=0;arr[i]!='N';i++)
	{
		scanf("%c",&arr[i]);
		sz++;
	}
#endif
	int sz=sizeof(arr)/sizeof(arr[0])-1;
	reverse_string(arr,sz);
	for(i=0;i<sz;i++)
	{
		printf("%c ",arr[i]);
	}
	printf("\n");
	return 0;
}*/
//将参数字符串中的字符反向排序方法二（要求：不能使用C函数库中的字符串操作函数）
//例如a="a,b,c,d,e"将a变为a="e,d,c,b,a",不是简单的逆序打印
/*#include<stdio.h>
#include<string.h>
int my_strlen(char* str)
{
	int count=0;
	while(*str!='\0')
	{
		count++;
		str++;
	}
	return count;
}
void reverse_string(char arr[])
{
	int left=0;
	//int right=strlen(arr)-1;
	int right=my_strlen(arr)-1;
while(left<right)
	{
			int temp=arr[left];
			arr[left]=arr[right];
			arr[right]=temp;
			left++;
			right--;
	}
}
int main()
{
	char arr[20]="abcdefg";
	int i,sz=0;
	reverse_string(arr);
	printf("%s\n",arr);
	return 0;
}*/
//将参数字符串中的字符反向排序方法三（递归算法）（要求：不能使用C函数库中的字符串操作函数）
//例如a="a,b,c,d,e"将a变为a="e,d,c,b,a",不是简单的逆序打印
/*#include<stdio.h>
int my_strlen(char* str)
{
	int count=0;
	while(*str!='\0')
	{
		count++;
		str++;
	}
	return count;
}
void reverse_string(char arr[])
{
	char tmp=arr[0];
	int len=my_strlen(arr);
	arr[0]=arr[len-1];
	arr[len-1]='\0';
	if(my_strlen(arr+1)>=2)
		reverse_string(arr+1);
	arr[len-1]=tmp;
}
int main()
{
	char arr[]="abcdefg";
	reverse_string(arr);
	printf("%s\n",arr);
	return 0;
}*/
//字符串的拷贝（当arr1或者arr2是空指针的时候，会造成程序崩溃）
/*#include<stdio.h>
#include<string.h>
void my_strcpy(char* arr1,char* arr2)
{
#if 0
	while(*arr2!='\0')
	{
		*arr1++=*arr2++;
		//*arr1=*arr2;
		//arr1++;
		//arr2++;
	}
	*arr1=*arr2;
#endif
	while(*arr1++=*arr2++)//当arr2将'\0'赋值给arr1的时候，arr1=0，为假，退出循环
	{
		;
	}
}
int main()
{
	char arr1[]="##############";
	char arr2[]="hclwb";
	//strcpy(arr1,arr2);//strcpy 字符串的拷贝 将arr2字符串拷贝到arr1字符串上面
	my_strcpy(arr1,arr2);
	printf("%s\n",arr1);
	//my_strcpy
	return 0;
}*/
//字符串的拷贝(优化过的版本二)
/*#include<stdio.h>
#include<assert.h>
void my_strcpy(char* arr1,char* arr2)
{
	//如果表达式 expression 的值为假（即为 0），那么它将首先向标准错误流 stderr 打印一条出错信息，然后再通过调用 abort 函数终止程序运行；否则，assert 无任何作用。
	//所以arr1，arr2是空指针的时候就会终止程序运行，并抛出错误
	assert(arr1!=NULL);//断言 
	assert(arr2=NULL);
		while(*arr1++=*arr2++)//当arr2将'\0'赋值给arr1的时候，arr1=0，为假，退出循环
	{
		;
	}

}
int main()
{
	char arr1[]="##############";
	char arr2[]="hclwb";
	//strcpy(arr1,arr2);//strcpy 字符串的拷贝 将arr2字符串拷贝到arr1字符串上面
	my_strcpy(arr1,arr2);
	printf("%s\n",arr1);
	//my_strcpy
	return 0;
}*/
//字符串的拷贝(更加优化的版本三)
/*#include<stdio.h>
#include<assert.h>
void my_strcpy(char* arr1,const char* arr2)//constx修饰arr2，保证arr2不被误修改。const防止将arr1和arr2的位置放反了，有了const如果arr2放在了arr1的位置就会报错
{
	//如果表达式 expression 的值为假（即为 0），那么它将首先向标准错误流 stderr 打印一条出错信息，然后再通过调用 abort 函数终止程序运行；否则，assert 无任何作用。
	//所以arr1，arr2是空指针的时候就会终止程序运行，并抛出错误
	assert(arr1!=NULL);//断言 
	assert(arr2!=NULL);
		while(*arr1++=*arr2++)//当arr2将'\0'赋值给arr1的时候，arr1=0，为假，退出循环
	{
		;
	}

}
int main()
{
	char arr1[]="##############";
	char arr2[]="hclwb";
	//strcpy(arr1,arr2);//strcpy 字符串的拷贝 将arr2字符串拷贝到arr1字符串上面
	my_strcpy(arr1,arr2);
	printf("%s\n",arr1);
	//my_strcpy
	return 0;
}*/
//const防止被指针修改的小练习
/*#include<stdio.h>
int main()
{
	//给num加了const主观意愿是不想num的值被修改，但是通过非法的方式可以用指针的方式把num修改
	//想要把地址交给p但是又不允许修改num的值，可以将定义的指针变量的前面也加上const
	//在指针p的前面加上const之后，想运行*p=20;会报错 左值指定const对象，左值必须是可修改的
	const int num=10;
	int n=100;
#if 0
	const int* p=&num;//const放在指针变量*左边时，修饰的是*p,限制*p，但是不限制p.也就是说，不能通过p的值来改变*p(num)的值
	//int* p=&num;    //*p=10不能实现，但是p=&n可以实现
#endif
	int* const p=&num;//const放在指针变量*右边时，修饰的是指针变量本身(p),限制p，但是不限制*p.也就是说p不能被改变
	*p=20;            //*p=20可以实现，但是p=&n不可以实现
	p=&n;
	const int* const p=&num;//const既修饰*p,又修饰p
	printf("%d\n",num);     //*p=10和p=&n都不能实现
	return 0;
}*/
//字符串的拷贝(最优化的版本四)
/*#include<stdio.h>
#include<assert.h>
char* my_strcpy(char* arr1,const char* arr2)//constx修饰arr2，保证arr2不被误修改。const防止将arr1和arr2的位置放反了，有了const如果arr2放在了arr1的位置就会报错
{
	char* ret=arr1;
	//如果表达式 expression 的值为假（即为 0），那么它将首先向标准错误流 stderr 打印一条出错信息，然后再通过调用 abort 函数终止程序运行；否则，assert 无任何作用。
	//所以arr1，arr2是空指针的时候就会终止程序运行，并抛出错误
	assert(arr1!=NULL);//断言 
	assert(arr2!=NULL);//断言
	//把arr2指向的字符串拷贝到arr1指向的空间包含'\0'字符
		while(*arr1++=*arr2++)//当arr2将'\0'赋值给arr1的时候，arr1=0，为假，退出循环
	{
		;
	}
	return ret;
}
int main()
{
	char arr1[]="##############";
	char arr2[]="hclwb";
	//strcpy(arr1,arr2);//strcpy 字符串的拷贝 将arr2字符串拷贝到arr1字符串上面
	printf("%s\n",my_strcpy(arr1,arr2));
	//my_strcpy
	return 0;
}*/
