//https://codeforces.com/contest/677/submission/240736951
#include <bits/stdc++.h>
#include <iostream>

using namespace std;

void solve()
{
    int n, h; cin >> n >> h;
    int ans = 0;
    while (n--) {
        int a; cin >> a; 

        if (a > h) {
            ans += 2;
        }
        else {
            ans++;
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
