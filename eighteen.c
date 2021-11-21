//浮点数在内存中的存储
/*#include<stdio.h>
//9.0
//小数点前的二进制，也就是9的二进制 1001，小数点后的是0,可以是2^0所以就是1001.0
//(-1)^0 * 1.001 * 2^3  如果是正数的话，就是(-1)*0,如果是负数的话，就是(-1)*1 再把1001.0变为科学计数法，就是1.001*2^3 因为是二进制，所以是2^3,如果是十进制就是10^3
//(-1)^S * M     * 2^E
//S--->0/1(正数是0，负数是1)
//M--->1.001
//E--->3
//E+127=130(double 类型的时候，加的是1023）
//
//0.5(十进制数)
//0.1（浮点数的二进制数）0代表2^0；1代表2^(-1),所以是0.5  
//(-1)^0  *  1.0 * 2^(-1)
//(-1)^S  *  M   * 2^E
//S=0
//M=1.0
//E=-1
//E+127=126
//对于32位的浮点数，最高位的1位是符号位S，接着8位是指数E，剩下的23位为有效数字M
//对于64位的浮点数，最高的1位是符号位S，接着的11位是指数E，剩下的52位为有效数字M
//IEEE 754对有效数字M和指数E，还有一些特别规定。前面说过，1<=M<2，也就是说，M可以写成1.xxxxxx的形式，其中xxxxxx表示小数部分。
//IEEE 754规定，在计算机内部保存M时，默认这个数的第一位总是1，因此可以被舍去，只保存后面的xxxxxx部分。比如保存1.01的时候，只保存01，等到读取的时候，再把第一位的1加上去。这样做的目的，是节省1位有效数字。以32位浮点数为例，留给M只有23位，将第一位的1舍去以后，等于可以保存24位有效数字。
//至于指数E，情况就比较复杂。
//首先，E为一个无符号整数(unsigned int ）这意味着，如果E为8位，它的取值范围为0~255;如果E为11位，它的取值范围为0~2047。但是，我们知道，科学计数法中的E是可以出现负数的，
//所以IEEE 754规定，存入内存时E的真实值必须再加上一个中间数，对于8位的E，这个中间数是127;对于11位的E，这个中间数是1023。比如，2^10的E是10，所以保存成32位浮点数时，必须保存成10+127=137，即10001001。
int main()
{
	int n=9;
	//0 00000000 000000000000000001001 补码
	//因为转换成了float，所以就认为第一位的0是S，后八个是E,剩下的是M（有效位）
	//因为E是全0，所以改成(-1)^0 * 0.00000000000000001001 * 2^-126(无限接近于0)
	float *pFloat=(float *)&n;//变量n为int型，&a就是int*类型，要把&a赋给char *p,就得强制类型转换，char *p=(char *)&a//int *,这样才不会报错
	printf("n的值为：%d\n",n);//9
	printf("pFloat的值为：%f\n",*pFloat);//0.000000

	*pFloat=9.0;
	//1001.0
	//(-1)^0 * 1.001 * 2^3
	//0 100000010 00100000000000000存到内存中的形式
	//n是个整数，所以按照整数的内存取 就是1091567616
	printf("num的值为：%d\n",n);//1091567616
	printf("pFloat的值为：%f\n",*pFloat);//9.000000
	return 0;
}*/
/*#include<stdio.h>
int main()
{
	float f=5.5;
	//5.5
	//101.1 整数部分5的二进制是101，小数部分是0.5，可以写成2^-1,也就是0.1（0.01代表2^-2,0.001代表2^-3）
	//1.011*2^2科学计数法
	//(-1)^0*1.001*2^2
	//S=0
	//M=1.011（前面的1不存，只存后面的小数位）
	//E=2 E=2+127=129 129的二进制序列是10000001
	//0 10000001 01100000000000000000000
	//0x40b00000 把上面的转换成十六进制
	//
	//3.14
	//11.001.......后面有好多0和1，精确到3.14
	return 0;
}*/
//然后，指数E从内存中取出还可以再分成三种情况∶
//E不全为0或不全为1
//这时，浮点数就采用下面的规则表示，即指数E的计算值减去127(或1023），得到真实值，再将有效数字M前加上第一位的1。比如∶0.5 ( 1/2)的二进制形式为0.1，由于规定正数部分必须为1，即将小数点右移1位，则为1.0*2^(-1)，其阶码为-1+127=126，表示为01111110，而尾数1.0去掉整数部分为0，补齐0到23位
//00000000000000000000000，则其二进制表示形式为:
//0 01111110 00000000000000000000000
//E全为0
//这时，浮点数的指数E等于1-127(或者1-1023 )即为真实值，有效数字M不再加上第一位的1，而是还原为0.xxxxxx的小数。这样做是为了表示+-0，以及接近于0的很小的数字。
//E全为1
//这时，如果有效数字M全为0，表示+-无穷大(正负取决于符号位s ) ;
