//指针和数组笔试题（5）

/*#include<stdio.h>
#include<string.h>
int main()
{
	char arr[] = "abcdef";//a b c d e f \0
	printf( "%d\n", strlen(arr));//6 arr是首元素地址，从首元素向后找寻'\0'
	printf( "%d\n", strlen(arr +0));//6 arr+0表示首元素地址加0，还是首元素，从首元素的位置向后寻找'\0'
	printf("%d\n", strlen(*arr));//报错 strlen参数接受的是地址，而*arr是元素a,strlen会把a当作一个地址，把a的ASKM值97当作地址进行访问，产生非法访问的错误
	printf("%d\n", strlen(arr[1]));//报错，相当于把元素b传过去了，过程如上，只不过访问的是b的ASKM值98
	printf("%d\n", strlen(&arr) );//6 (会报警告，因为&arr是一个数组指针，是char(*)[7]类型，strlen参数的类型是const char *p)&arr是数组的地址,但也是从第一个元素的地址开始向后找'\0'
	printf("%d\n", strlen(&arr + 1));// 随机值(会报警告，理由同上)，&arr+1是把整个数组跳过去了，在数组后面的地址开始找'\0'
	printf("%d\n", strlen(&arr[0] +1));//5 &arr[0] +1表示指向b的地址，从b开始找'\0'

	return 0;
}*/