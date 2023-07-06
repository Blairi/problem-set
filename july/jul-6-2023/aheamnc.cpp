#include <bits/stdc++.h>
#include <cmath>
#include <iostream>
#include <string>

using namespace std;

void solve()
{
    int n; cin >> n;

    int ex = n % 4;
    string num = to_string(int(pow(1378, ex)));
    cout << num.at(num.size() - 1) << endl;
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
