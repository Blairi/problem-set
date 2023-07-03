#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    while(t--) {

        int pos[] = {0, 0};
        int l; cin >> l;
        string dir; cin >> dir;

        int flag = 0;
        for(int i = 0; i < l; i++){
            if(dir.at(i) == 'U')
                pos[1] += 1;
            if(dir.at(i) == 'D')
                pos[1] -= 1;
            if(dir.at(i) == 'L')
                pos[0] -= 1;
            if(dir.at(i) == 'R')
                pos[0] += 1;

            if(pos[0] == 1 && pos[1] == 1){
                /* cout << pos[0] << "," << pos[1] << endl; */
                cout << "YES" << endl;
                flag = 1;
                break;
            }
        }

        if(flag == 0)
            cout << "NO" << endl;

        /* cout << pos[0] << "," << pos[1] << endl; */
        
    }
    return 0;
}
