#include<bits/stdc++.h>
using namespace std;


//���������������Щ���⣿ 
//void GetMemory(char *p)
//{
//	p = (char *) malloc (100);
//}
//
//void Test()
//{
//	char *str = NULL;
//	GetMemory(str);
//	strcmp(str, "hello world");
//	printf(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}
//
// ��: ��step����
// 1.��̬�ڴ濪�ٵķ���ֵp δ�ж�
// 2.G������ֵ ��δ�ı�S�����е�str���Ӷ����� 15 �Կ�ָ���ʹ�á�
//   ����ʹ�ó������
// 3.���� �����Ѹ��������ڴ�й¶�ˡ� 

void GetMemory(char* p)
{
	*p = (char *) malloc (100);
}

void Test()
{
	char *str = NULL;
	GetMemory(str);
	strcmp(str, "hello world");
	printf(str);
}

int main()
{
	Test();
	return 0;
}
