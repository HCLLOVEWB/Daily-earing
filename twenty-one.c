//数组指针的书写
/*#include<stdio.h>
int main()
{
	char* arr[5];
	char*(*pa)[5]=&arr;

	int arr2[10]={0};
	int (*pa2)[10]=&arr2;
	return 0;
}*/
//&arr+1跳过整个数组，arr+1跳过数组中一个元素，指向下一个元素
/*#include<stdio.h>
int main()
{
	int arr[10]={0};
	printf("arr=%p\n",arr);//arr=0078F888
	printf("&arr=%p\n",&arr);//&arr=0078F888

	printf("arr+1=%p\n",arr+1);//arr+1=0078F88C
	printf("&arr+1=%p\n",&arr+1);//&arr+1=0078F8B0
	return 0;
}*/
//根据上面的代码我们发现，其实&arr和arr，虽然值是一样的，但是意义应该不一样的。实际上:&arr表示的是数组的地址，而不是数组首元素的地址。(细细体会一下)数组的地址+1，跳过整个数组的大小，所以&arr+1相对于&arr的差值是40.
//用指针和数组指针打印数组元素
/*#include<stdio.h>
int main()
{
	int arr[10]={1,2,3,4,5,6,7,8,9,10};

	int *p=arr;
	int i=0;
	for(i=0;i<10;i++)
	{
		printf("%d ",*(p+i));
	}

	//int (*pa)[10]=&arr;
	//int i=0;
	//for(i=0;i<10;i++)
	//{
	//	printf("%d ",*(*pa+1));//*pa==arr
	//}

#if 0
	for(i=0;i<10;i++)
	{
		printf("%d ",(*pa)[i]);
	}
#endif
	return 0;
}*/