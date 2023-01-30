// https://codeforces.com/contest/271/submission/191284420

#include <bits/stdc++.h>
#include <iostream>

using namespace std;

bool distinct(int y)
{
    string s = to_string(y);
    map<char, int> m;
    for(int i = 0; i < s.size(); i++)
    {
	m[s.at(i)]++;
    }

    for(int i = 0; i < s.size(); i++)
    {
	if(m[s.at(i)] > 1) return false;
    }

    return true;

}

int main()
{
    int y; cin >> y;

    int ans = y + 1;
    while(!distinct(ans)) ans ++;

    cout << ans << endl;
}
