// https://codeforces.com/contest/546/submission/240052616
#include <bits/stdc++.h>
#include <iostream>

using namespace std;

void solve()
{
    int k, n, w; cin >> k >> n >> w;

    for (int i = 1; i<w+1; i++) {
        n -= i*k; 
    }

    if (n >= 0) {
        cout << 0 << "\n";
        return;
    }

    cout << n*-1 << "\n";
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
