//指针和数组笔试题

/*#include<stdio.h>
int main()
{
	//字符数组
	char arr[] = { 'a', 'b ', 'c', 'd', 'e', 'f'};
	printf("%d \n", sizeof( arr) ); //6 arr表示整个数组，sizeof计算的是数组大小，6*1=6字节
	printf("%d\n", sizeof(arr + 0));//4 arr+0表示首元素地址，地址的长度是4/8个字节
	printf("%d\n", sizeof(*arr));//1 *arr中的arr代表首元素的地址(因为*arr既不是sizeof(数组名)，也不是&arr),解引用表示首元素，首元素的长度是1
	printf( "%d\n", sizeof(arr[1]));//1 arr[1]是数组的第二个元素，数组第二个元素的长度是1	
	printf("%d\n", sizeof(&arr));//4 &arr虽然是整个数组的地址，但还是地址，地址的大小是4/8个字节
	printf("%d\n", sizeof( &arr + 1));//4 &arr+1表示跳过整个数组后的空间地址，还是计算地址的长度，所以是4/8
	printf(" %d\n", sizeof(&arr[0] +1));//4 &a[0]表示数组第一个元素的地址，&a[0]+1表示第二个元素的地址，所以还是地址的长度，所以是4/8
	return 0;
}*/