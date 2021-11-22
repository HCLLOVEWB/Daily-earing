//指针的进阶

//1.指针就是个变量，用来存放地址，地址唯一标识一块内存空间。
//2.指针的大小是固定的4/8个字节(32位平台/64位平台)。
//3.指针是有类型，指针的类型决定了指针的+-整数的步长，指针解引用操作的时候的权限。
//4.指针的运算。

/*#include<stdio.h>
int main()
{
	char arr[]="abcdef";
	char* pc=arr;
	printf("%s\n",arr);
	printf("%s\n",pc);
	return 0;
}*/
/*#include<stdio.h>
int main()
{
	const char* p="abcdef";//"abcdef"是一个常量字符串
	//*p='W';//会报错 程序会崩溃
	printf("%s\n",p);//Segmentation fault的错误（段错误）
	//printf("%c\n",*p);//a
	//printf("%s\n",p);//abcdef p存放的是首字符的地址
	return 0;
}*/
/*#include<stdio.h>
int main()
{
	char arr1[]="abcdef";
	char arr2[]="abcdef";
	const char* p1="abcdef";//常量字符串
	const char* p2="abcdef";//常量字符串  pi和p2指向同一块空间位置的起始地址

	if(p1==p2)
	{
		printf("hehe\n");//打印hehe
	}
	else
	{
		printf("haha\n");
	}
#if 0
	if(arr1==arr2)//因为arr1和arr2是两块不同的地址，arr1是arr1首元素的地址，arr2存放的是arr2首元素的地址
	{             //所以arr1和arr2不相同
		printf("hehe\n");
	}
	else
	{
		printf("haha\n");//打印出haha
	}
#endif
	return 0;
}*/