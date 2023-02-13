// https://codeforces.com/contest/141/submission/193530525

#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    string g, h; cin >> g >> h;
    string p; cin >> p;
    
    string s = g + h;

    if(s.size() != p.size())
    {
        cout << "NO" << endl;
        return 0;
    }

    map <char, int> m1;
    map <char, int> m2;
    for(int i = 0; i < s.size(); i ++)
        m1[s.at(i)]++;

    for(int i = 0; i < p.size(); i ++)
        m2[p.at(i)]++;

    for(auto i : m1)
    {
        if(m1[i.first] != m2[i.first])
        {
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;

    return 0;
}
