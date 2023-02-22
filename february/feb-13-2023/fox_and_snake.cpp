// https://codeforces.com/contest/510/submission/193534663

#include <bits/stdc++.h>
#include <iostream>

using namespace std;


int main()
{
    int n, m; cin >> n >> m;

    int flag = 0;
    for(int i = 0; i < n; i ++)
    {
        for(int j = 0; j < m; j ++)
        {
            if(i % 2 == 0)
                cout << "#";
            else
            {
                if(flag == 1)
                {
                    cout << "#";
                    for(int k = 0; k < m - 1; k ++)
                    {
                        cout << ".";
                    }
                    flag = 0;
                    break;
                }
                else 
                {
                    for(int k = 0; k < m - 1; k ++)
                    {
                        cout << ".";
                    }
                    cout << "#";
                    flag = 1;
                    break;
                }
            }
        }
        cout << "\n";
    }

    return 0;
}
