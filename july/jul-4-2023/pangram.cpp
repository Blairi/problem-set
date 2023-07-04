#include <algorithm>
#include <bits/stdc++.h>
#include <cctype>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n; cin >> n;
    string s; cin >> s;

    string alp = "";
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    
    for (int i = 0; i < n; i++) {
        if(alp.find(s.at(i)) == string::npos){
            alp += s.at(i);
        }
    }

    if(alp.size() == 26)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
