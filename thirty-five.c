/*//改造冒泡排序，使它能够排序任何类型的数据
#include<stdio.h>
#include<string.h>
//实现bubble_sort函数的程序员，他是否知道未来排序的数据类型-不知道
//那程序员也不知道，待比较的两个元素的类型
struct Stu
{
	char name[20];
	int age;
};
void swap(char* buf1,char* buf2,int width)
{
	int i=0;
	for(i=0;i<width;i++)
	{
		char tmp=*buf1;
		*buf1=*buf2;
		*buf2=tmp;
		buf1++;
		buf2++;
	}
}
void bubble_sort(void* base,int sz,int width,int(*cmp)(const void* e1,const void* e2))
{
	int j=0,i=0;
	//趟数
	for(i=0;i<sz-1;i++)\
	{
		//每一趟比较的次数
		for(j=0;j<sz-1-i;j++)
		{
			//两个元素比较
			if(cmp((char*)base+j*width,(char*)base+(j+1)*width)>0)
			{
				//交换
				swap((char*)base+j*width,(char*)base+(j+1)*width,width);
			}
		}
	}
}

int cmp_int(const void* e1,const void* e2)
{
	//比较两个整型值的大小
	return *(int*)e1-*(int*)e2;
}
void test4()
{
	int arr[10]={9,8,7,6,5,4,3,2,1,0};
	int sz=sizeof(arr)/sizeof(arr[0]);
	//使用bubble_sort的程序员一定知道自己排序的是什么数据
	//就应该知道如何比较待排序数组中的元素
	bubble_sort(arr,sz,sizeof(arr[0]),cmp_int);
	int i=0;
		for(i=0;i<sz;i++)
	{
		printf("%d ",arr[i]);
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
void test5()
{
	struct Stu s[3]={{"zhangsan",20},{"kisi",30},{"wangwu",18}};
	int sz=sizeof(s)/sizeof(s[0]);
	bubble_sort(s,sz,sizeof(s[0]),cmp_stu_by_age);
	//bubble_sort(s,sz,sizeof(s[0]),cmp_stu_by_name);
}
int main()
{
	test4();
	//test5();
	return 0;
}*/
