#include<bits/stdc++.h>
using namespace std;
map<string, string> mp0;
map<string, string> mp1;
map<string, string, greater<string> > mp2;
map<string, string> mp3;
map<string, string, greater<string> > mp4;
int main()
{
	string order, str, str1, str2;
	int row, i;
	map<string, string>::iterator it;
		
	cin >> order >> row;
	getchar();
	
	while(row--)
	{
		getline(cin, str);
		str1 = str;
		
		for(i = 0; i < str.size();)
		{
			if(!isalpha(str[i])) str.erase(str.begin() + i);
			else i++;
		}
		mp0[str] = str1;
				
	}
	for(it = mp0.begin(); it != mp0.end(); it++)
	{
		str2 = it -> first;
		str1 = it -> second;
		mp1[it -> first] = str1, mp2[it -> first] = str1;
		transform(str2.begin(), str2.end(), str2.begin(), ::tolower);
		mp3[str2] = str1, mp4[str2] = str1;
	}

	if("inc" == order)
		for(it = mp1.begin(); it != mp1.end(); it++)
			cout << it -> second << endl;
	else if("dec" == order)
		for(it = mp2.begin(); it != mp2.end(); it++)
			cout << it -> second << endl;
	else if("ncinc" == order)
		for(it = mp3.begin(); it != mp3.end(); it++)
			cout << it -> second << endl;
	else if("ncdec" == order)
		for(it = mp4.begin(); it != mp4.end(); it++)
			cout << it -> second << endl;
	return 0;
}
