#include <algorithm>
#include <bits/stdc++.h>
#include <cctype>
#include <iostream>

using namespace std;

int main()
{
    string s; cin >> s;

    int cu = 0;
    int cl = 0;
    for (char& c : s) {
        if(c >= 65 && c <= 90)
            cu += 1;
        else
            cl += 1;
    }

    if (cu > cl) 
        transform(s.begin(), s.end(), s.begin(), ::toupper);
    else
        transform(s.begin(), s.end(), s.begin(), ::tolower);

    cout << s << endl;


    return 0;
}
