#include<bits/stdc++.h>
using namespace std;


//请问这里出现了那些问题？ 
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
// 答: 以step来看
// 1.动态内存开辟的返回值p 未判断
// 2.G函数传值 并未改变S函数中的str，从而导致 15 对空指针的使用。
//   这里使得程序崩溃
// 3.假设 上述已改正。但内存泄露了。 


//请问输出的结果？ 
//int main()
//{
//	unsigned char puc[4];
//	struct tag
//	{
//		unsigned char uc1;
//		unsigned char uc2 : 1;
//		unsigned char uc3 : 2;
//		unsigned char uc4 : 3;
//	}*pst;
//	pst = (struct tag*) puc;
//	memset(puc, 0, 4);
//	pst -> uc1 = 2;
//	pst -> uc2 = 3;
//	pst -> uc3 = 4;
//	pst -> uc4 = 5;
//	printf("%02x %02x %02x %02x\n", puc[0], puc[1], puc[2], puc[3]);
//	return 0;
//}
 
