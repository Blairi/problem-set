#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    string s; cin >> s;

    while (s.find("WUB") != string::npos) {
        int pos = s.find("WUB");
        if (pos > 0 && s.at(pos - 1) && s.at(pos-1) == ' ') {
            s.replace(pos, 3, "");
            continue;
        }
        s.replace(pos, 3, " ");
    }

    if (s[0] == ' ') {
        s.replace(0, 1, "");
    }
    if (s[s.size() - 1] == ' ') {
        s.replace(s.size() - 1, 1, "");
    }

    cout << s << endl;

    return 0;
}
