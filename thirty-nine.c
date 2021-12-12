//指针和数组笔试题（4）

/*#include<stdio.h>
#include<string.h>
int main()
{
	//char arr[]={'a', 'b', 'c', 'd', 'e', 'f'}//上一个代码创建的数组
	char arr[] = "abcdef";
	printf("%d\n",sizeof(arr));//7 数组里面存了7个元素(包括'\0')，7*1=7(表示7个元素，每个元素是char类型，1个字节，一共有7个字节)
	printf("%d\n",sizeof(arr + 0));//4 首元素地址+0，所以是计算地址的还是首元素地址，还是4个或者8个字节
	printf("%d\n",sizeof(*arr));//1 此时*arr中的arr是指首元素的地址，所以*arr是指首元素，是计算首元素的大小
	printf("%d\n",sizeof(arr[1]));//1 arr[1]是第二个元素，sizeof(arr[1])计算的是第二个元素的大小
	printf("%d\n",sizeof(&arr));//4 &arr虽然是指数组的地址，但是也是计算地址的长度，所以是4/8
	printf("%d\n",sizeof(&arr + 1));//4 &arr+1是指跳过整个数组之后的地址，但也是地址，所以是4/8
	printf("%d\n",sizeof(&arr[0] + 1));//4 &arr[0]+1是指第二个元素的地址

	return 0;
}*/