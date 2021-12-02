//函数指针数组的真假
int (*parr1[10])()//定义了一个函数指针数组，是无参的，返回类型是int
int *parr2[10]();//错误的，*parr2[10]必须要括起来
int (*)()parr3[10;]//parr3[10]要放在*旁边*/

//练习
/*1、 
char* my_strcpy(char* dest,const char* src);
//1、写一个函数指针 pf,能够存放4个my_strcpy函数的地址
char* (*pf)(char*,const char*)//函数返回值类型是char*,所以最前面是char*
//2、写一个函数指针数组 pfArr,能够存放四个my_strcpy函数的地址
char*(*pfArr[4])(char*,const char*)
去掉pfArr[4],剩下的就是函数指针类型*/