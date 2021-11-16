//结构体创建的两种方法
/*#include<stdio.h>
//第一种方法创建结构体
#if 0 
struct Stu
{
	//成员变量
	char name[20];
	short age;
	char tele[12];
	char sex[5];
}s1,s2,s3;//s1,s2,s3是三个全局的结构体变量(尽量少的用全局变量)
#endif
//第二种方法创建全局变量
typedef struct Stu
{
	//成员变量
	char name[20];
	short age;
	char tele[12];
	char sex[5];
}Stu;//这个是类型
int main()
{
	struct Stu s1={"傻狗狗"，21，"141316","男"};//局部变量(通过方法一创建的结构体变量)
	Stu s2={"猪猪宝贝"，22,"131416","女"};//通过方法二来进行的
	return 0;
}*/
//结构体变量可以嵌套结构体
/*#include<stdio.h>
struct S
{
	int a;
	char c[10];
	char arr[20];
	double d;
};
struct T
{
	char ch[10];
	struct S s;
	char* pc;
};
int main()
{
	char arr[]="love";
	struct T t={"hcl",{99,"wb","love",13.14},arr};//里面的结构体也需要被大括号括起来
	printf("%s\n",t.ch);//打印hcl
	printf("%s\n",t.s.c);//打印wb
	printf("%lf\n",t.s.d);//打印13.140000
	return 0;
}*/
//结构体
/*#include<stdio.h>
typedef struct Stu
{
	//成员变量
	char name[20];
	short age;
	char tele[12];
	char sex[5];
}Stu;
void Print(Stu tmp)
{
	printf("name: %s\n",tmp.name);
	printf("age: %d\n",tmp.age);
	printf("tele: %s\n",tmp.tele);
	printf("sex %s\n",tmp.sex);
}
void Print2(Stu* ps)//只传过去一个指针变量，占用4个字节（或者是8个字节）
{
	printf("name: %s\n",ps->name);
	printf("age: %d\n",ps->age);
	printf("tele: %s\n",ps->tele);
	printf("sex: %s\n",ps->sex);
}
int main()
{
	Stu s={"朝龙",21,"141316","男"};
	//print2更好，占用空间更小
	//函数传参的时候，参数是需要压栈的。如果传递一个结构体对象的时候，结构体过大，参数压栈的系统开销比较大，所以会导致性能的下降
	//函数传参的时候，要传结构体的地址
	Print(s);
	Print2(&s);
	return 0;
}*/