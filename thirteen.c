//�ṹ�崴�������ַ���
/*#include<stdio.h>
//��һ�ַ��������ṹ��
#if 0 
struct Stu
{
	//��Ա����
	char name[20];
	short age;
	char tele[12];
	char sex[5];
}s1,s2,s3;//s1,s2,s3������ȫ�ֵĽṹ�����(�����ٵ���ȫ�ֱ���)
#endif
//�ڶ��ַ�������ȫ�ֱ���
typedef struct Stu
{
	//��Ա����
	char name[20];
	short age;
	char tele[12];
	char sex[5];
}Stu;//���������
int main()
{
	struct Stu s1={"ɵ����"��21��"141316","��"};//�ֲ�����(ͨ������һ�����Ľṹ�����)
	Stu s2={"������"��22,"131416","Ů"};//ͨ�������������е�
	return 0;
}*/
//�ṹ���������Ƕ�׽ṹ��
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
	struct T t={"hcl",{99,"wb","love",13.14},arr};//����Ľṹ��Ҳ��Ҫ��������������
	printf("%s\n",t.ch);//��ӡhcl
	printf("%s\n",t.s.c);//��ӡwb
	printf("%lf\n",t.s.d);//��ӡ13.140000
	return 0;
}*/
//�ṹ��
/*#include<stdio.h>
typedef struct Stu
{
	//��Ա����
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
void Print2(Stu* ps)//ֻ����ȥһ��ָ�������ռ��4���ֽڣ�������8���ֽڣ�
{
	printf("name: %s\n",ps->name);
	printf("age: %d\n",ps->age);
	printf("tele: %s\n",ps->tele);
	printf("sex: %s\n",ps->sex);
}
int main()
{
	Stu s={"����",21,"141316","��"};
	//print2���ã�ռ�ÿռ��С
	//�������ε�ʱ�򣬲�������Ҫѹջ�ġ��������һ���ṹ������ʱ�򣬽ṹ����󣬲���ѹջ��ϵͳ�����Ƚϴ����Իᵼ�����ܵ��½�
	//�������ε�ʱ��Ҫ���ṹ��ĵ�ַ
	Print(s);
	Print2(&s);
	return 0;
}*/