// https://codeforces.com/contest/266/submission/239940445
#include <bits/stdc++.h>
#include <iostream>

using namespace std;

void solve()
{
    int n; cin >> n;
    string s; cin >> s;

    int ans = 0;
    for (int i = 0; i < s.size(); i ++) {
        if (i+1 < s.size() && s.at(i) == s.at(i+1)) {
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
