#include <bits/stdc++.h>
#include <iostream>

using namespace std;

void solve()
{
    int n = 0;
    float sum = 0;
    cin >> n;

    for (int i =0; i < n; i++) {
        float drink = 0;
        cin >> drink;
        sum += drink/100;
    }
    
    cout << sum / n * 100 << endl;
}

int main()
{
    int t = 1;
    /* cin >> t; */
    
    while (t--) 
    {
        solve();
    }

    return 0;
}
