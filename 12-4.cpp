//#include<bits/stdc++.h>
//using namespace std;
//int primes[200005];
//bool arr[200005];
//
//void f()
//{
//    int i, j, cnt = 0;
//    for(i = 2; i < 200005; i++)
//    {
//        if(!arr[i]) primes[cnt++] = i;
//        for(j = 0; primes[j] <= 200005 / i; j++)
//        {
//            arr[i * primes[j]] = 1;
//            if(i % primes[j] == 0) break;
//        }
//    }
//}
//
//int main()
//{
//    int n, m, num = 0;
//    cin >> n >> m;
//    
//    f();
//    for(int i = n - 1; i < m; i++)
//    {
//            if(num) cout << " ";
//            cout << primes[i];
//			num++;
//			if(num == 10) puts(""), num = 0;          
//    }
//    return 0;
//}


	


//		mp.erase("");
//		cin.getline(arr, sizeof(arr));

#include<bits/stdc++.h>
using namespace std;

int isprimes[10000000];
bool arr[10000000];
void primes()
{
	int cnt;
	for(int i = 2; i <= 10000000; i++)
	{
		if(!arr[i]) isprimes[cnt++] = i;
		for(int j = 0; isprimes[j] <= 10000000 / i; j++)
		{
			arr[i * isprimes[j]] = true;
			if(i % isprimes[j] == 0) break;
		}
	}
}

int main()
{
	int n, m, num = 0;
	cin >> n >> m;
	primes();
	for(int i = n; i <= m - 6; i++)
	{
		if(!arr[i] && !arr[i + 6]) num++;
	}
	cout << num << endl;
	return 0;
}












