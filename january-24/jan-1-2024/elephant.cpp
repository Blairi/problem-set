// https://codeforces.com/contest/617/submission/239941928
#include <bits/stdc++.h>
#include <iostream>

using namespace std;

void solve()
{
    int x; cin >> x;
    int ans = 0;
    for (int i = 5; i > 0; i--) {
        while (x - i >= 0) {
            x -= i; 
            ans ++;
        } 
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
