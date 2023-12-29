#include<bits/stdc++.h>
using namespace std;

struct moon
{
    double num, pri, val;
}mn[1010];

bool cmp(moon x, moon y)
{
    return x.val > y.val;
}
int main()
{
    int n, d;
    cin >> n >> d;
    getchar();

    int j;
    for(j = 0; j < n; j++)
        cin >> mn[j].num;
    for(j = 0; j < n; j++)
    {
        cin >> mn[j].pri;
        mn[j].val = mn[j].pri / mn[j].num;
    }
    sort(mn, mn + n, cmp);
    int i = 0;
    double tal = 0, sum = 0;
    while(sum < d && i < n)
    {
        if(sum + mn[i].num <= d) tal += mn[i].pri;
        else
        {
            tal += mn[i].val * (d - sum);
        }
        cout << tal << " " << sum << " " << i << endl;
    	sum += mn[i].num;
        i++;
    }
    cout << fixed << setprecision(2) << tal << endl;
    return 0;
}
