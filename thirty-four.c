//void* p��һ��������ָ�룬���Խ����������͵ĵ�ַ�����ǲ��ܽ��н����ò�������Ϊ��void���Բ�֪�����ʼ����ֽڣ�void*ָ��Ҳ���ܽ��мӼ�ָ��Ĳ���
//qsort-�⺯��-����(ʹ�õķ�����quick sort-��������)

/*#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//��һ������:�������������Ԫ�ص�ַ
//�ڶ�������:�����������Ԫ�ظ���
//����������:�����������ÿ��Ԫ�صĴ�С-��λ���ֽ�
//���ĸ�����:�Ǻ���ָ�룬�Ƚ�����Ԫ�ص����ú����ĵ�ַ-�������ʹ�����Լ�ʵ��
//           ����ָ�����������ǣ����Ƚϵ�����Ԫ�صĵ�ַ
//qsort����
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
	//�Ƚ���������ֵ�Ĵ�С
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
	//return ((int)(*(float*)e1-*(float*)e2));//��Ϊ����ֵ��int���ͣ����Կ��������ǿ��ת��һ�±�Ϊint��

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
	//�Ƚ����־��ǱȽ��ַ���
	//�ַ����Ƚϲ����ô���С�����Ƚϣ�Ӧ����strcmp����
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