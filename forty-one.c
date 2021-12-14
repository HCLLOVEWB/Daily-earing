//指针和数组笔试题（6）

/*#include<stdio.h>
int main()
{
	char *p = "abcdef";//把字符串里的a的地址放在了p里面
	printf( "%din", sizeof(p));//4 计算指针变量p的大小4/8个字节
	printf( "%d\n", sizeof(p +1));//4 得到的是b的地址，4/8个字节
	printf("%din", sizeof( *p));//1 就是字符串的第一个字符- a
	printf( "%din", sizeof(p[]));//1 p[0]==*(p+0)==a,这两种写法完全等价
	printf( "%din", sizeof(&p));//4 计算&p的大小，地址所占的长度就是4个字节
	printf("%d\n", sizeof(&p + 1));//4 计算的还是地址，跳过p所取得的地址
	printf( "%din", sizeof(&p[0] + 1));//4 拿到的是b的地址，所以是4/8

	return 0;
}*/