#include <algorithm>
#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int bin_search(int a[], int n, int key){

    int i = 0, f = n - 1;

    while (f>=i) {
        int piv = (f+i) /2;

        if (a[piv] == key) {

            if(a[piv] > a[piv+1]){
                return piv;
            }

            while (a[piv] == a[piv + 1]) {
                piv++;
            }

            return piv;
        }
        if (a[piv] > key) {
            f = piv - 1;
        }
        else{
            if (key < a[piv + 1]) {
                return piv;
            }
            i = piv + 1;
        }
    }

    return -1;

}

void solve()
{
    int n, m; cin >> n >> m;
    
    int a[n], b[m];
    for (int i = 0; i<n; i++) cin >> a[i];
    for (int i = 0; i<m; i++) cin >> b[i];

    sort(a, a+n);

    for (int i = 0; i < m; i++){
        int ans = bin_search(a, n, b[i]);
        if (i == m - 1) 
            cout << ans + 1;
        else
            cout << ans + 1 << " ";
    }
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
