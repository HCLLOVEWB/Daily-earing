//����ָ����������
int (*parr1[10])()//������һ������ָ�����飬���޲εģ�����������int
int *parr2[10]();//����ģ�*parr2[10]����Ҫ������
int (*)()parr3[10;]//parr3[10]Ҫ����*�Ա�*/

//��ϰ
/*1�� 
char* my_strcpy(char* dest,const char* src);
//1��дһ������ָ�� pf,�ܹ����4��my_strcpy�����ĵ�ַ
char* (*pf)(char*,const char*)//��������ֵ������char*,������ǰ����char*
//2��дһ������ָ������ pfArr,�ܹ�����ĸ�my_strcpy�����ĵ�ַ
char*(*pfArr[4])(char*,const char*)
ȥ��pfArr[4],ʣ�µľ��Ǻ���ָ������*/