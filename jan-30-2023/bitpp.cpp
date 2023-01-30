/*
https://codeforces.com/contest/282/submission/191265985 
*/

#include <bits/stdc++.h>
#include <iostream>

using namespace std;
 
int main()
{
    int n; cin >> n;
    int x = 0;
    while(n--)
    {
	string op; cin >> op;
	for(int i = 0; i < op.size(); i++)
	{
	    if(op.at(i) == 'X') continue;

	    if(op.at(i) == '+' && op.at(i + 1) == '+')
	    {
		x++;
		break;
	    }
	    else
	    {
		x--;
		break;
	    }
	}
    }
    cout << x << endl;
    return 0;
}
