// https://codeforces.com/contest/432/submission/194295153
#include <algorithm>
#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    int n,k; cin >> n >> k;
    int s[n];
    for(int i = 0; i < n; i++)
        cin >> s[i];

    sort(s, s + n);

    for(int i = 0; i < n; i++)
        for(int j = 0; j < k; j++)
            s[i]++;

    int ans = 0;
    for(int i = 0; i < n; i+=3)
    {
        if(s[i] <= 5 && s[i+1] <= 5 && s[i+2] <= 5) ans++;
    }

    cout << ans << endl;

    return 0;
}
