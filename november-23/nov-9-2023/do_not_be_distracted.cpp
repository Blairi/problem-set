//https://codeforces.com/contest/1520/submission/232102756
#include <bits/stdc++.h>
#include <iostream>

using namespace std;

void solve()
{
    int n; cin >> n;
    string s; cin >> s;
    for (int i = 0; i<n-1; i++) {

        if (s.at(i) == s.at(i+1)) 
            continue; 

        for (int j = i+1; j<n; j++) {
            if (s.at(i) == s.at(j)) {
                cout <<"NO\n";
                return;
            } 
        }
    }
    cout<<"YES\n";

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
