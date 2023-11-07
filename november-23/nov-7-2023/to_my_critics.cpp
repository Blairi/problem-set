#include <algorithm>
#include <bits/stdc++.h>
#include <iostream>

using namespace std;

void solve()
{
    int a, b, c; cin >> a >> b >> c;
    if ((a+b+c) - min({a,b,c}) >= 10) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
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
