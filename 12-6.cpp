//#include<bits/stdc++.h>
//using namespace std;
//
//int arr1[220][220];
//int arr2[220][220];
//
//int main()
//{
//	int n, m, i, j, s, key;
//	cin >> n >> m;
//	for(i = 0; i < n; i++)
//		for(j = 0; j < m; j++)
//			cin >> arr1[i][j] >> arr2[i][j];
//	cin >> s;
//
//	key = 0;
//	for(i = 0; i != n; i++)
//	{
//		key += arr2[i][s];
//		j = s;
//		do
//		{
//			if(arr1[i][j])
//			{
//				arr2[i][s]--;
//				if(!arr2[i][s]) break;
//			}
//			j = (j + 1) % m;
//		}while(arr2[i][s]);
//		s = j;
//	}
//	cout << key % 20123 << endl;
//	return 0;
//}

//µã¿¨³äÖµ 
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int n;
//	while(cin >> n)
//		cout << n / 2 + 1 << endl;
//	return 0;
//}

//#include<bits/stdc++.h>
//using namespace std;
//
//const int N = 20002;
//int a[N];
//int n, k, i, j;
//
//int main()
//{
//	cin>>n;
//	a[1]=1;
//	for(int k=2,i=1,j=1; k<=n ;k++)
//	{
//	    if(a[i]*2+1 == a[j]*3+1) a[k] = a[i]*2+1,i++,j++;
//		else if(a[i]*2+1<a[j]*3+1) a[k] = a[i++]*2+1;
//		else
//	    	a[k]=a[j++]*3+1;
//	}
//	cout<<a[n];
//    return 0;
//}

//#include<bits/stdc++.h>
//using namespace std;
//
//map<char, int> mp;
//map<int, char> pos;
//int main()
//{
//	string str;
//	char ch;
//	int i, j, k;
//	for(ch = 'A'; ch <= 'Z'; ch++)
//		mp[ch] = 0;
//	while(getline(cin, str))
//	{
//		for(i = 0; i < str.size(); i++)
//		{
//			if(isalpha(str[i]))
//			{
//				ch = toupper(str[i]);
//				mp[ch]++;
//			}
//		}
//	}
//	j = INT_MIN;
//	map<char, int>::iterator it;
//	for(it = mp.begin(); it != mp.end(); it++)
//		j = j > it->second ? j : it->second;
//	for(k = j; k >= 1; k--)
//	{
//		for(it = mp.end(); it != mp.begin(); it--)
//		{
//			if(k <= it->second)
//			{
//				pos[k] = it->first;
//				break;
//			}			
//		}
//	}
//	for(k = j; k >= 1; k--)
//	{
//		for(it = mp.begin(); it != mp.end(); it++)
//		{
//			if(it != mp.begin()) cout << " ";
//			if(it->second >= k) printf("*");
//			else printf(" ");
//			if(pos[k] == it->first)
//				break;
//		}
//		puts("");
//	}
//	for(it = mp.begin(); it != mp.end(); it++)
//	{
//		if(it != mp.begin()) cout << " ";
//		cout << it->first;
//	}	
//	puts("");
//	return 0;
//}



































































