// https://codeforces.com/contest/116/submission/240055208
#include <algorithm>
#include <bits/stdc++.h>
#include <iostream>

using namespace std;

void solve()
{
    int n; cin >> n;
    
    int ans = 0, cur = 0;
    for (int i = 0; i < n; i++) {
        int a, b; cin >> a >> b;
        cur -= a;
        cur += b;
        ans = max(ans, cur);
    }
    cout << ans << "\n";
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
