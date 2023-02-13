// https://codeforces.com/contest/228/submission/193525729

#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    map<int, int> m;
    for (int i = 0; i < 4; i++)
    {
       int s;
       cin >> s;
       m[s]++;
    }

    int ans = 0;
    for(auto i : m)
    {
        while (m[i.first] > 1) {
            m[i.first] --;
            ans ++;
        }
    }
    cout << ans << endl;
    return 0;
}
