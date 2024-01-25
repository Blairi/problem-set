// https://codeforces.com/contest/136/submission/243209429
#include <bits/stdc++.h>
#include <iostream>

using namespace std;

void solve()
{
    int n; cin >> n;
    int f[n+1];
    for (int i = 1; i<n+1; i++) {
        int g; cin >> g;
        f[g] = i;
    }
    
    for (int i = 1; i<n+1; i++) {
        cout << f[i] << " ";
    }
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
