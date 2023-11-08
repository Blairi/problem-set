// https://codeforces.com/contest/492/submission/231871701
#include <bits/stdc++.h>
#include <iostream>

using namespace std;

void solve()
{
    int n, ans = 1; cin >> n;
    for (int i = 2; n > 0; i++) {
        n -= ((i+1)*i)/2;
        ans++;
    }
    cout << ans - 1 << endl;
}

int main()
{
    int t = 1;
    /* cin >> t; */
    
    while (t--) 
    {
        solve();
    }

    return 0;
}
