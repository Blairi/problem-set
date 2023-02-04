#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    int n; cin >> n;
    int d[5] = {100, 20, 10, 5, 1};
    int ans = 0;

    for(int i = 0; n > 0; i++)
    {
	while(n / d[i] >= 1)
	{
	    n = n - d[i];
	    ans++;
	}
    }
    cout << ans << endl;

    return 0;
}
