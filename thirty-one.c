//�ص�����
//�ص���������һ��ͨ������ָ����õĺ����������Ѻ�����ָ�루��ַ)��Ϊ�������ݸ���һ�������������ָ�뱻������������ָ��ĺ���ʱ�����Ǿ�˵���ǻص��������ص����������ɸú�����ʵ�ַ�ֱ�ӵ��ã��������ض����¼�����������ʱ�������һ�����õģ����ڶԸ��¼�������������Ӧ��

/*#include<stdio.h>
void print(char *str)
{
	printf("hehe:%s",str);
}
void test(void (*p)(char*))
{
	printf("test\n");          //test
	p("bit");//(*p)("bit"	   //hehe:bit(��ӡ�����Ľ��)
}                //ͨ��pȥ����print������print��������Ϊ�ص����������ֻ��ƣ�����Ϊ�ص���������
int main()
{
	test(print);
	return 0;
}*/


//������case�д��ڶ�������ظ����֣����Բ�ȡ�ص������ķ���������������
/*
#include<stdio.h>
void menu()
{
	printf("***********************\n");
	printf("****    1   Add    ****\n");
	printf("****    2   Sub    ****\n");
	printf("****    3   Mul    ****\n");
	printf("****    4   Div    ****\n");
	printf("****    0   Exit   ****\n");
	printf("***********************\n");
}
int Add(int x,int y)
{
	return x+y;
}
int Sub(int x,int y)
{
	return x-y;
}
int Mul(int x,int y)
{
	return x*y;
}
int Div( int x,int y)
{
	return x/y;
}
void Calc(int(*pf)(int,int))
{
	int x=0;
	int y=0;
	printf("����������������:");
	scanf("%d%d",&x,&y);
	printf("%d\n",pf(x,y));
}
int main()
{
	int input=0;
	int x=0;
	int y=0;
	do
	{
		menu();
		printf("��ѡ��:\n");
		scanf("%d",&input);
		switch(input)
		{
		case 1:
			Calc(Add);//����Calc������������������Ϳ��Բ�д��(��Ϊ����Add,Sub,Mul,Div��һ���������Ķ�һ�������ԾͿ���ѡ�����Calc������������������)
			//printf("����������������:");
			//scanf("%d%d",&x,&y);
			//printf("%d\n",Add(x,y));
			break;
		case 2:
			Calc(Sub);
			//printf("����������������:");
			//scanf("%d%d",&x,&y);
			//printf("%d\n",Sub(x,y));
			break;
		case 3:
			Calc(Mul);
			//printf("����������������:");
			//scanf("%d%d",&x,&y);
			//printf("%d\n",Mul(x,y));
			break;
		case 4:
			Calc(Div);
			//printf("����������������:");
			//scanf("%d%d",&x,&y);
			//printf("%d\n",Div(x,y));
			break;
		case 0:
			printf("�˳�\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	}while(input);
	return 0;
}*/
