// https://codeforces.com/contest/344/submission/192095547

#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    int n; cin >> n;
    
    int ans = 0;
    string prev;
    while(n--)
    {
	string m; cin >> m;
	if(m != prev)
	{
	    ans ++;
	    prev = m;
	}
    }

    cout << ans << endl;
    return 0;
}
