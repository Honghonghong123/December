#include<bits/stdc++.h>
using namespace std;

long long int ss(int x)
{
	int sum = 1;
	for(int i = 2; i <= x; i++)
		sum *= i;
	return sum;
}
int Cn(int n, int m)
{
	if(n < m) swap(n, m);
	return ss(n) / ss(m) / ss(n - m);
}

int main()
{
	int n, m, c1, c2;
	cin >> n >> m >> c1 >> c2;
	long long int road = 0;
	road = ss(n + m) / (ss(m) * ss(n));
	// 因马所减少的路径
	if(c1 + 1 <= n)
	{
		if(c2 + 2 <= m) road -= Cn(c1 + c2 + 3, c1 + 1) * Cn(n - c1 - 1 + m - c2 - 2, m - c2 - 2);
		if(c2 - 2 >= 0) road -= Cn(c1 + c2 - 1, c1 + 1) * Cn(n - c1 - 1 + m - c2 + 2, m - c2 + 2);
	}
	if(c1 - 1 >= 0)
	{
		if(c2 + 2 <= m) road -= Cn(c1 + c2 + 1, c1 - 1) * Cn(n - c1 + 1 + m - c2 - 2, m - c2 - 2);
		if(c2 - 2 >= 0) road -= Cn(c1 + c2 - 3, c1 - 1) * Cn(n - c1 + 1 + m - c2 + 2, m - c2 + 2);
	}
	if(c2 + 1 <= m)
	{
		if(c1 + 2 <= n) road -= Cn(c1 + c2 + 3, c2 + 1) * Cn(n - c1 - 2 + m - c2 - 1, m - c2 - 1);
		if(c1 - 2 >= 0) road -= Cn(c1 + c2 - 1, c2 + 1) * Cn(n - c1 + 2 + m - c2 - 1, m - c2 - 1);
	}
	if(c2 - 1 >= 0)
	{
		if(c1 + 2 <= n) road -= Cn(c1 + c2 + 1, c2 - 1) * Cn(n - c1 - 2 + m - c2 + 1, m - c2 + 1);
		if(c1 - 2 >= 0) road -= Cn(c1 + c2 - 3, c2 - 1) * Cn(n - c1 + 2 + m - c2 + 1, m - c2 + 1);
	}
	road -= Cn(c1 + c2, c1) * Cn(n - c1 + m - c2, m - c2);
	cout << road << endl;
	
	return 0;
}
