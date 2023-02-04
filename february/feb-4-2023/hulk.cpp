// https://codeforces.com/contest/705/submission/192167125

#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    int n; cin >> n;
    int flag = 0;
    string ans;
    while(n--)
    {
	if(flag == 0 && n > 0)
	{
	    flag = 1;
	    ans += "I hate that";
	}
	else if(flag == 1 && n > 0)
	{
	    flag = 0;
	    ans += "I love that";
	}
	else if(flag == 0) ans += "I hate it";
	else ans += "I love it";
	ans += " ";
    }
    ans.pop_back();
    cout << ans << endl;
    return 0;
}
