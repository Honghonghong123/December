//#include<bits/stdc++.h>
//using namespace std;
//map<string, int> mp;
//
//int main()
//{
//    int row;
//    int i;
//    string str, let;
//    cin >> row; getchar();
//    while(row)
//    {
//        getline(cin, str);
//        if(str == "#")
//        {
//			map<string, int>::iterator it;
//	
//	        cout << mp.size() << endl;
//	        for(it = mp.begin(); it != mp.end(); it++)
//	            cout << it->first << " " << it->second << endl;
//	        mp.clear();
//            row--;
//            continue;
//        }           
//        while((i = str.find(" ")) != -1)
//        {
//            let = str.substr(0, i);
//            transform(let.begin(), let.end(), let.begin(), ::toupper);
//            mp[let]++;
//            str = str.substr(i + 1);
//        }
//        if(str.size())
//        {
//            let = str.substr(0, i);
//            transform(let.begin(), let.end(), let.begin(), ::toupper);
//            mp[let]++;
//        } 
//    }    
//    return 0;
//}

//#include<bits/stdc++.h>
//using namespace std;
//
//struct Stu
//{
//    string id, name;
//    double x, y, z, ave;
//}Stu[5];
//
//bool cmp(struct Stu x, struct Stu y)
//{
//	return x.ave < y.ave;
//}
//
//int main()
//{
//    int i;
//    for(i = 0; i < 5; i++)
//    {
//        cin >> Stu[i].id >> Stu[i].name 
//        >> Stu[i].x >> Stu[i].y >> Stu[i].z;
//        Stu[i].ave = (Stu[i].x + Stu[i].y + Stu[i].z) / 3;      
//    }
//    sort(Stu, Stu + 5, cmp);
//    for(i = 0; i < 5; i++) cout << fixed << setprecision(1)<< Stu[i].id << " " << Stu[i].name << " "
//        << Stu[i].x << " " << Stu[i].y << " " << Stu[i].z << " " << Stu[i].ave << endl;
//    return 0;
//}

//#include<bits/stdc++.h>
//using namespace std;
//int encipher(char x)
//{
//	if(islower(x)) return x - 96;
//	else return x - 38;
//}
//
//vector<string> ans;
//int main()
//{
//	int row, i;
//	char c;
//	string str;
//	scanf("%d", &row); getchar();
//
//	while(row--)
//	{
//		while((c = getchar()) != '\n')
//		{
//			if(isalpha(c))
//				ans.push_back(to_string(encipher(c)));			
//			else
//			{
//				str.assign(1, c);
//				ans.push_back(str);
//			}
//		}
//		for(i = 0; i < ans.size(); i ++)
//			cout << ans[i];
//		puts("");
//		ans.clear();
//	}
//	return 0;
//}


//#include<bits/stdc++.h>
//using namespace std;
//int arr[50][50];
//int main()
//{
//    int n, i, j;
//    arr[0][0] = 1;
//    for(i = 1; i < 32; i++)
//    {
//        arr[i][0] = 1;
//        for(j = 1; j < i + 1; j++)
//            arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//    }
//
//    
//    while(cin >> n)
//    {
//        for(i = 0; i < n; i++)
//        {
//            for(j = 0; j < i + 1; j++)
//                cout << arr[i][j] << " ";
//            cout << endl;
//        }          
//    }
//    return 0;
//}



//#include<bits/stdc++.h>
//using namespace std;
//
//void f1(string str, int precision)
//{
//    string ans;
//    ans = str.substr(0, str.find(".") + 1);
//    str = str.substr(str.find(".") + 1);                
//    if(str.size() > precision)
//    {
//        ans += str.substr(0, precision - 1);
//        if(str[precision] >= '5')
//        {
//            if(str[precision - 1] != '9')
//            {
//                ans.push_back(str[precision - 1] + 1);
//            }            
//            else
//            {
//                int i = 1, f = 0;
//                do
//                {
//                    if(i == 1)
//                    {
//                        ans.push_back('0');
//                    }
//                    else
//                    {
//                        ans[ans.size() - i] = '0';
//                    }
//                    i++;
//                    
//                   if(i == precision + 1)
//                   {
//                       i++;
//                   }
//                    else if(i == ans.size() + 1)
//                    {
//                        ans = "1" + ans;
//                        f = 1;
//                        break;
//                    }
//                }while(ans[ans.size() - i] == '9');
//
//                
//                if(!f)
//                {
//                    ans[ans.size() - i] = ans[ans.size() - i] + 1;
//                }
//
//                
//            }
//        }
//        else
//        {
//            ans.push_back(str[precision - 1]);
//        }
//    }
//    else
//    {
//        while(str.size() != precision)
//        {
//            str += "0";
//        }
//        ans += str;
//    }
//    
//    cout << ans << endl;
//}
//void f2(string str, int precision)
//{
//    string ans;
//    ans = str.substr(0, str.find(".") + 1);
//    str = str.substr(str.find(".") + 1);
//    if(str.size() > precision)
//    {
//        ans += str.substr(0, precision);
//    }
//    else
//    {
//        while(str.size() != precision)
//        {
//            str += "0";
//        }
//        ans += str;
//    }
//    cout << ans << endl;
//}
//void f3(string str, int precision)
//{
//    string ans;
//    ans = str.substr(0, str.find(".") + 1);
//    str = str.substr(str.find(".") + 1);
//    if(str.size() > precision)
//    {
//        if(str[precision] < '5')
//        {
//            ans += str.substr(0, precision);
//        }
//        else if(str[precision] > '5')
//        {
//            ans += str.substr(0, precision - 1);
//            if(str[precision - 1] != '9')
//            {
//                ans.push_back(str[precision - 1] + 1);
//            }            
//            else
//            {
//                int i = 1, f = 0;
//                do
//                {
//                    if(i == 1)
//                    {
//                        ans.push_back('0');
//                    }
//                    else
//                    {
//                        ans[ans.size() - i] = '0';
//                    }
//                    i++;
//                    if(i == precision + 1)
//                   {
//                       i++;
//                   }
//                    else if(i == ans.size() + 1)
//                    {
//                        ans = "1" + ans;
//                        f = 1;
//                        break;
//                    }
//                }while(ans[ans.size() - i] == '9');
//                if(!f)
//                {
//                    ans[ans.size() - i] = ans[ans.size() - i] + 1;
//                }
//            }  
//        }
//        else if(str[precision] == '5')
//        {
//            if(str.size() > precision + 1)
//            {
//                if(str[precision + 1] > '0')
//                {
//                    ans += str.substr(0, precision - 1);
//                    if(str[precision - 1] != '9')
//                    {
//                        ans.push_back(str[precision - 1] + 1);
//                    }            
//                    else
//                    {
//                        int i = 1, f = 0;
//                        do
//                        {
//                            if(i == 1)
//                            {
//                                ans.push_back('0');
//                            }
//                            else
//                            {
//                                ans[ans.size() - i] = '0';
//                            }
//                            i++;
//                            if(i == precision + 1)
//                           {
//                               i++;
//                           }
//                            else if(i == ans.size() + 1)
//                            {
//                                ans = "1" + ans;
//                                f = 1;
//                                break;
//                            }
//                        }while(ans[ans.size() - i] == '9');
//                        if(!f)
//                        {
//                            ans[ans.size() - i] = ans[ans.size() - i] + 1;
//                        }
//                    }
//                    
//                }
//                else
//                {
//                    if(str[precision - 1] % 2)
//                    {
//                        ans += str.substr(0, precision - 1);
//                        
//                        if(str[precision - 1] != '9')
//                        {
//                            ans.push_back(str[precision - 1] + 1);
//                        }
//                        else
//                        {
//                            int i = 1, f = 0;
//                            do
//                            {
//                                if(i == 1)
//                                {
//                                    ans.push_back('0');
//                                }
//                                else
//                                {
//                                    ans[ans.size() - i] = '0';
//                                }
//                                i++;
//                                if(i == precision + 1)
//                               {
//                                   i++;
//                               }
//                                else if(i == ans.size() + 1)
//                                {
//                                    ans = "1" + ans;
//                                    f = 1;
//                                    break;
//                                }
//                            }while(ans[ans.size() - i] == '9');
//                            if(!f)
//                            {
//                                ans[ans.size() - i] = ans[ans.size() - i] + 1;
//                            }
//                        }
//                    }
//                    else
//                    {
//                        ans += str.substr(0, precision);
//                    }
//                }
//            }
//        }
//    }
//    else
//    {
//        while(str.size() != precision)
//        {
//            str += "0";
//        }
//        ans += str;
//    }
//    cout << ans << endl;
//}
//
//int main()
//{
//    //一种是“四舍五入”;
//    //截断
//    //“四舍六入五成双”，即当有效位的后一位数字是 5 时，有 3 种情况要考虑：
//    //如果 5 后面还有其它非 0 尾数，则进位；
//    //如果没有，则当有效位最后一位是单数时进位，
//    //双数时舍去，即保持最后一位是双数
//    string str;
//    int order, precision, row;
//    cin >> row >> precision;
//    while(row--)
//    {
//        cin >> order >> str;
//        if(1 == order)
//        {
//            f1(str, precision);
//        }
//        else if(2 == order)
//        {
//            f2(str, precision);
//        }         
//        else if(3 == order)
//        {
//            f3(str, precision);
//        }
//    }
//        
//    
//    return 0;
//}

 


























