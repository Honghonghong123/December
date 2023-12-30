//#include<bits/stdc++.h>
//using namespace std;
//
//int arr[10][10];
//int stand[10];
////输入arr的数据 
//void ARR()
//{
//	for(int i = 0; i < 9; i++)
//	{
//		for(int j = 0; j < 9; j++)
//		{
//			arr[i][j] = getchar() - '0';
//		}
//		getchar();
//	}
//		
//}
////判断行和列 
//int ROW_C()
//{
//	for(int i = 0; i < 9; i++)
//	{
//		memset(stand, 0, sizeof(stand));
//		for(int j = 0; j < 9; j++)
//			stand[arr[i][j]] = 1;
//		for(int j = 1; j <= 9; j++)
//			if(!stand[j]) return 0;
//	}
//	for(int i = 0; i < 9; i++)
//	{
//		memset(stand, 0, sizeof(stand));
//		for(int j = 0; j < 9; j++)
//			stand[arr[j][i]] = 1;
//		for(int j = 1; j <= 9; j++)
//			if(!stand[j]) return 0;
//	}
//	return 1;
//}
//int Three()
//{
//	for(int k = 0; k < 3; k++)
//	{
//		for(int t = 0; t < 3; t++)
//		{
//			memset(stand, 0, sizeof(stand));
//			for(int i = k * 3; i < 3 * (k + 1); i++)
//			{
//				for(int j = t * 3; j < 3* (t + 1); j++)
//					stand[arr[i][j]] = 1;
//			}
//			for(int j = 1; j <= 9; j++)
//				if(!stand[j]) return 0;
//		}	
//	}
//	return 1;
//}
//
//int main()
//{
//	int n;
//	cin >> n;
//
//	while(n--)
//	{
//		getchar();
//		ARR();
//			
//		int f = ROW_C();
//		if(f)
//		{
//			f = Three();
//			if(f) cout << "yes" << endl;
//			else cout << "no" << endl;
//		}
//		else cout << "no" << endl;
//	}
//	return 0;
//}

//#include<bits/stdc++.h>
//using namespace std;
//int arr[60];
//
//void ARR()
//{
//	arr[1] = 3;
//	arr[2] = arr[3] = 6;
//	for(int i = 4; i < 51; i++)
//		arr[i] = arr[i - 1] + arr[i - 2] * 2;
//}
//
//int main()
//{
//	ARR();
//	
//	int n;
//	while(cin >> n) cout << arr[n] << endl;
//}


//#include<bits/stdc++.h>
//using namespace std;
//
//long long int Step(long long int n)
//{
//	long long int sum = 1;
//	for(int i = 2; i <= n; i++)
//		sum *= i;
//	return sum;
//}
//double Count(long long int n, long long int m)
//{
//	return Step(n) / (Step(m) * Step(n - m) * 1.0);
//}
//int main()
//{
//	int n;
//	while(cin >> n)
//	{
//		long long int sum = 0;
//		for(long long int i = 0; i < n; i++)
//		{
//			sum += Count(n - i, i);
//		}
//		cout << sum << endl;
//	}
//	return 0;
//}


//#include<bits/stdc++.h>
//using namespace std;
//
//int Count(int day)
//{
//	int sum = 1;
//	for(int i = 1; i < day; i++)
//		sum = (sum + 1) * 2;
//	return sum;
//}
//
//int main()
//{
//	int day;
//	while(cin >> day)
//		cout << Count(day) << endl;
//	return 0;
//}
