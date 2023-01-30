// https://codeforces.com/contest/112/submission/191275004

#include <bits/stdc++.h>
#include <iostream>

using namespace std;

void lower(string& s)
{
    for(int i = 0; i < s.size(); i++)
    {
	int asc = int(s.at(i));
	if( asc >= 65 && asc <= 90 )
	{
	    s[i] = char( asc + 32 );
	}
    }
}

int main()
{
    string s1, s2; cin >> s1 >> s2;
    lower(s1);
    lower(s2);

    if(s1 == s2)
    {
	cout << 0 << endl;
	return 0;
    }

    for(int i = 0; i<s1.size(); i++)
    {
	int asc1 = int(s1.at(i));
	int asc2 = int(s2.at(i));

	if(asc1 == asc2) continue;

	if(asc1 < asc2)
	{
	    cout << -1 << endl;
	    return 0;
	}
	else
	{
	    cout << 1 << endl;
	    return 0;
	}

    }

}
