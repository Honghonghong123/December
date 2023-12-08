#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, m, i;
	int a;
	cin >> n;
	while(n--)
	{
		cin >> m;
		for(i = 0; i < m; i++)
		{
			cin >> a;
			if(a + 3 * (i + 1) < 60)
			{
				continue;
			}
			else
			{
				printf("%d\n", a);
				break;
			}
		}
	}
	return 0;
}
//6 10 20 30 40 47 60
