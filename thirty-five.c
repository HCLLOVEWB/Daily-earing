/*//����ð������ʹ���ܹ������κ����͵�����
#include<stdio.h>
#include<string.h>
//ʵ��bubble_sort�����ĳ���Ա�����Ƿ�֪��δ���������������-��֪��
//�ǳ���ԱҲ��֪�������Ƚϵ�����Ԫ�ص�����
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
	//����
	for(i=0;i<sz-1;i++)\
	{
		//ÿһ�˱ȽϵĴ���
		for(j=0;j<sz-1-i;j++)
		{
			//����Ԫ�رȽ�
			if(cmp((char*)base+j*width,(char*)base+(j+1)*width)>0)
			{
				//����
				swap((char*)base+j*width,(char*)base+(j+1)*width,width);
			}
		}
	}
}

int cmp_int(const void* e1,const void* e2)
{
	//�Ƚ���������ֵ�Ĵ�С
	return *(int*)e1-*(int*)e2;
}
void test4()
{
	int arr[10]={9,8,7,6,5,4,3,2,1,0};
	int sz=sizeof(arr)/sizeof(arr[0]);
	//ʹ��bubble_sort�ĳ���Աһ��֪���Լ��������ʲô����
	//��Ӧ��֪����αȽϴ����������е�Ԫ��
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
	//�Ƚ����־��ǱȽ��ַ���
	//�ַ����Ƚϲ����ô���С�����Ƚϣ�Ӧ����strcmp����
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
