//一维数组传参
/*#include<stdio.h>
void test(int arr[])//ok
{}
void test(int arr[10])//ok
{}
void test(int *arr)//ok
{}
void test2(int *arr[])//ok
{}
void test2(int *arr[20])//ok
{}
void test2(int **arr)//ok 数组名是首元素地址，arr2数组的每个元素都是int*类型的，是个一级指针，一级指针的地址正好放在二级指针里面去
{}
int main()
{
	int arr[10]={0};
	int *arr2[20]={0};
	test(arr);
	test2(arr2);
	return 0;
}*/

//二维数组传参
/*#include<stdio.h>
void test(int *arr)//
{}
void test(int arr[3][5])//ok
{}
void test(int arr[][5])//ok 行可以省略，但是列不可以省略
{}
void test(int arr[3][])//no 行可以省略，但是列不可以省略
{}
void test(int arr[][])//no 行可以省略，但是列不可以省略
{}
void test(int *arr)//no arr是二维数组，表示首元素的话，是数组第一行的地址(一维数组的地址)不能存放在int*(整形地址)里面
{}
void test(int **arr)//no arr是二维数组，表示首元素的话，是数组第一行的地址(一维数组的地址）不能存放在二级指针中(二级指针是存放一级指针的地址)
{}
void test(int *arr[5])//no 指针数组，数组元素有五个，每个元素是int* 类型
{}
void test(int (*arr)[5])//ok 指针指向数组，数组中有五个元素，元素是int型
{}
int main()
{
	int arr[3][5]={0};
	test(arr);//二维数组传参,传的是首元素的地址(第一行一维数组的地址)
	return 0;
}*/
