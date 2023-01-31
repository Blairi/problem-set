// https://codeforces.com/contest/734/submission/191444315

#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    int n; cin >> n;
    string s; cin >> s;

    map<char, int> m;
    for(int i = 0; i < s.size(); i++)
    {
	m[s.at(i)]++;
    }

    if(m['A'] > m['D']) cout << "Anton" << endl;
    else if(m['A'] < m['D']) cout << "Danik" << endl;
    else cout << "Friendship" << endl;
}
