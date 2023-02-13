// https://codeforces.com/contest/785/submission/193526914
#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    int n; cin >> n;
    map<string, int> m
        = {{"Icosahedron", 20}, {"Tetrahedron", 4},
            {"Cube", 6}, {"Octahedron", 8}, {"Dodecahedron", 12}};

    int ans = 0;
    while (n--)
    {
        string p; cin >> p;
        ans += m[p];
    }

    cout << ans << endl;
    return 0;
}
