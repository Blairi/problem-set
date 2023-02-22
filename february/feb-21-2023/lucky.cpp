// https://codeforces.com/contest/1676/submission/194530245
//
#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        string n; cin >> n;
        int s1 = 0, s2 = 0;
        for(int i = 0; i < 3; i++)
            s1 += ( n.at(i) - '0' );
        for(int i = 3; i < n.size(); i++)
            s2 += (n.at(i) - '0');

        if(s1 == s2) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}
