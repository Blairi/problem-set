// https://codeforces.com/contest/520/submission/192087148

#include <bits/stdc++.h>
#include <iostream>

using namespace std;

void to_lower(string &s)
{
    for(int i = 0; i < s.size(); i++)
    {
	int asc = int( s.at(i) );
	if(asc >= 65 && asc <= 90) s[i] = char( asc + 32 );
    }
}

int main()
{
    int n; cin >> n;
    string s; cin >> s;
    to_lower(s);
    map<char, int> alph;
    int cont = 0;
    for(int i = 0; i < s.size(); i++)
    {
	if(alph[ s.at(i) ] == 0)
	{
	    alph[ s.at(i) ] ++;
	    cont++;
	}
    }

    if(cont == 26) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
