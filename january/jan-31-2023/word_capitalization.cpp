// https://codeforces.com/contest/281/submission/191447954

#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    string s; cin >> s;
    int asc = int(s.at(0));
    if(asc >= 97 && asc <= 122) s[0] = char(asc - 32);
    cout << s << endl;
    return 0;
}
