//stelen�������Ż�
/*#include<stdio.h>
#include<assert.h>
int my_strlen(const char* arr)//��֤arr�е��ַ������ᱻ�ı�
{
	int count=0;
	assert(arr!=NULL);//��ָ֤�����Ч��
	while(*arr!='\0')
	{
		count++;
		arr++;
	}
	return count;
}
int main()
{
	char arr[]="abcdef";
	int len=my_strlen(arr);
	printf("%d\n",len);
	return 0;
}*/
//дһ���ݹ麯����ʹ������һ���Ǹ����������������������֮��
/*#include<stdio.h>
int DigitSum(int num)
{
	if(num>9)
	{
		return (DigitSum(num/10)+num%10);
	}
	else
		return num;
}
int main()
{
	int num;
	printf("������һ������\n");
	scanf("%d",&num);
	int sum=DigitSum(num);
	printf("%d\n",sum);
	return 0;
}*/
//ʵ��n��k�η�,�õݹ���ʵ��
/*#include<stdio.h>
double Pow(int num,int k)
{
	if(k<0)
	{
		return(1.0/(Pow(num,-k)));
	}
	else if(k==0)
		return 1;
	else
	{
		if(k>1)
	   {
		return Pow(num,k-1)*num;
	   }
	    else
		return num;
	}
	
}
int main()
{
	int num,k;
	printf("������һ������\n");
	scanf("%d",&num);
	printf("����������õ����η�\n");
	scanf("%d",&k);
	double ret=Pow(num,k);
	printf("%lf\n",ret,k);
	return 0;
}*/