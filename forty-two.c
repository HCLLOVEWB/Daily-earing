//指针和数组笔试题（7）

/*#include<stdio.h>
#include<string.h>
int main()
{
	char* p = "abcdef" ;
	printf("%d\n", strlen(p));//6 p里面存着首字符a的地址，意味着从a的地址向后数，找'\0'
	printf( "%d\n", strlen(p +1));//5 从b的地址向后数，寻找'\0'
	printf("%d\n", strlen(*p));//非法访问的错误，报错  相当于把a传进去了，会把a的ASKM值当作地址来进行访问
	printf( "%d\n", strlen(p[]));//非法访问的错误，报错 同上
	printf("%d\n", strlen(&p));//随机值 从p的地址开始向后访问，直到遇到'\0',p里面存放的是a的地址(举例：a的地址是0x0012ff44,p里面存放的就是44ff1200,所以这个随机值就是3)，里面地址的内容不能预测，不知道是否有0，所以是随机值
	printf("%d\n", strlen(&p +1));//随机值 &p+1指向p地址后面的位置
	printf("%d\n", strlen(&p[0] + 1));//5 从第二个元素向后数

	return 0;
}*/