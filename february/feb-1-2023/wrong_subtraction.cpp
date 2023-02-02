// https://codeforces.com/contest/977/submission/191640475

#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    int n, k; cin >> n >> k;
    int i = 0;
    while(i < k)
    {
	if(n % 10 != 0) n--;
	else n /= 10;

	i++;
    }

    cout << n << endl;
    return 0;
}
