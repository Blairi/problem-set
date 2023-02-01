// https://codeforces.com/contest/263/submission/191450043

#include <bits/stdc++.h>
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n, r, c;
    for(r = 1; r < 6; r++)
    {
	for(c = 1; c < 6; c++)
	{
	    cin >> n;
	    if(n == 1) break;
	}
	if(n == 1) break;
    }
    int ans = abs(3 - r)  + abs(3 - c);
    cout << ans << endl;
    return 0;
}
