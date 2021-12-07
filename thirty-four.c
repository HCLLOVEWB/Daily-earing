//void* p是一个无类型指针，可以接收任意类型的地址，但是不能进行解引用操作，因为是void所以不知道访问几个字节；void*指针也不能进行加减指针的操作
//qsort-库函数-排序(使用的方法是quick sort-快速排序)

/*#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//第一个参数:待排序数组的首元素地址
//第二个参数:待排序数组的元素个数
//第三个参数:待排序数组的每个元素的大小-单位是字节
//第四个参数:是函数指针，比较两个元素的所用函数的地址-这个函数使用者自己实现
//           函数指针两个参数是：待比较的两个元素的地址
//qsort函数
#if 0
 void qsort(void* base,
			size_t num,
			size_t width,
			int(*cmp)(const void* e1,const void *e2)
			);
#endif
struct Stu
{
	char name[20];
	int age;
};
int cmp_int(const void* e1,const void* e2)
{
	//比较两个整型值的大小
	return *(int*)e1-*(int*)e2;
}
void test1()
{
	int arr[10]={9,8,7,6,5,4,3,2,1,0};
	int sz=sizeof(arr)/sizeof(arr[0]);
	qsort(arr,sz,sizeof(arr[0]),cmp_int);
	int i=0;
	for(i=0;i<sz;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}
int cmp_float(const void* e1,const void* e2)
{
	//return ((int)(*(float*)e1-*(float*)e2));//因为返回值是int类型，所以可以最后再强制转换一下变为int型

	if(*(float*)e1==*(float*)e2)
		return 0;
	else if(*(float*)e1>*(float*)e2)
		return 1;
	else
		return -1;
}
void test2()
{
	float f[]={9.0,8.0,7.0,6.0,5.0,4.0,1.0};
	int sz=sizeof(f)/sizeof(f[0]);
	qsort(f,sz,sizeof(f[0]),cmp_float);
	int j=0;
	for(j=0;j<sz;j++)
	{
		printf("%f ",f[j]);
	}
	printf("\n");
}
int cmp_stu_by_name(const void*e1,const void* e2)
{
	//比较名字就是比较字符串
	//字符串比较不能用大于小于来比较，应该用strcmp函数
	return strcmp(((struct Stu*)e1)->name,((struct Stu*)e2)->name);
}
int cmp_stu_by_age(const void*e1,const void* e2)
{
	return ((struct Stu*)e1)->age-((struct Stu*)e2)->age;
}
void test3()
{
	struct Stu s[3]={{"zhangsan",20},{"kisi",30},{"wangwu",18}};
	int sz=sizeof(s)/sizeof(s[0]);

	qsort(s,sz,sizeof(s[0]),cmp_stu_by_age);
	//qsort(s,sz,sizeof(s[0]),cmp_stu_by_name);
}
int main()
{
	test1();
	//test2();
	//test3();
	return 0;
}*/