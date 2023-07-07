#include <bits/stdc++.h>
#include <iostream>
#include <map>

using namespace std;

void solve()
{
    int n; cin >> n;

    map<int, int> nums;
    int inp[n];
    for (int i = 0; i<n; i++) cin >> inp[i];

    for (int i = 0; i<n; i++) {
        nums[inp[i]]++;
        if (nums[inp[i]] > 1) {
            cout << "NO" << endl;
            return;
        }
    }

    cout << "YES" << endl;
}

int main()
{
    int t = 1;
    cin >> t;
    
    while (t--) 
    {
        solve();
    }

    return 0;
}
