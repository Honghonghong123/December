#include<bits/stdc++.h>
using namespace std;

int arr2[100][100];
int arr1[110];

int main()
{
	memset(arr1, 0, sizeof(arr1));
	memset(arr2[0], -1, sizeof(arr2[0]) * 100);
	cout << arr2[99][99] << endl;
	cout << arr1[33] << endl;
	
	cout.setf(ios::showpoint);
	cout.setf(ios::fixed);
	double a = 1.254;
	double b = 1.254;
	double s = M_PI;

	//C++���ú���--count����
	cout << count(arr1, arr1 + 110, 0) << endl;

	//fixed���Ա������Ч���ְ���0����û��fixed�����ʡ�Խ�β0�� 
	cout << fixed << setprecision(2) << a << b << endl;
	cout << setprecision(8) << s << endl;

	//sprintf
	//https://www.coonote.com/c-note/sprintf-fun.html
	
	for(int i = 32; i < 127; i++)
	{
	    printf("[ %c ]: %3d 0x%#04X\n", i, i, i);
	}
	
	char str[50] = "sarwq";
	const char* who = "I";
	const char* whom = "CSDN";
	sprintf(str, "%s love %s.", str, whom);
	cout << str << endl;
	printf("%04d\n", 123);
	return 0;
}
