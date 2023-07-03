#include <bits/stdc++.h>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    while(t--) {
        string s;
        getline(cin, s);

        vector<std::string> num;
        stringstream ss(s);
        std::string sn;

        while (ss >> sn) {
            num.push_back(sn);
        }

        vector<int> nints;
        for (const auto& stri : num) {
            int nint = std::stoi(stri);
            nints.push_back(nint);
        }

        if(nints.at(0) + nints.at(1) == nints.at(2))
            cout << "+" << endl;
        else
            cout << "-" << endl;
        
    }
    return 0;
}
