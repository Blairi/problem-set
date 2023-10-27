// https://codeforces.com/contest/1328/submission/229944152
#include <bits/stdc++.h>
#include <iostream>

using namespace std;

void solve()
{
    int a,b; cin >> a >> b;
    if (a % b == 0) 
        cout << 0<< endl; 
    else
        cout << b - a % b << endl;
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
