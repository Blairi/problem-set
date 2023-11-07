// https://codeforces.com/contest/1283/submission/231823808
#include <bits/stdc++.h>
#include <iostream>

using namespace std;

void solve()
{
    int h, m; cin >> h >> m;
    
    int ans = 60 - m;
    h++;
    if (h == 24) {
        cout << ans << "\n";
        return;
    }

    cout << ans + ((24 - h)*60) << "\n";
}

int main()
{
    int t = 1;
    cin >> t;
    
    while (t--) 
    {
        solve();
    }

    return 0;
}
