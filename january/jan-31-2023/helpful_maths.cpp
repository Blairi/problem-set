#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    string s; cin >> s;
    vector<int> v;
    for(int i = 0; i < s.size(); i++)
    {
	if(s.at(i) != '+') v.push_back(s.at(i));
    }

    sort(v.begin(), v.end());
    
    string ans = "";
    for(int i = 0; i < v.size(); i++)
    {
	ans += v.at(i);
	if(i + 1 < v.size()) ans += "+";
    }

    cout << ans << endl;

}
