/*
A. Square String?
time limit per test 1 second
memory limit per test 256 megabytes
inputstandard input
outputstandard output

A string is called square if it is some string written twice in a row. For example, the strings "aa", "abcabc", "abab" and "baabaa" are square. But the strings "aaa", "abaaab" and "abcdabc" are not square.

For a given string 𝑠 determine if it is square.

Input
The first line of input data contains an integer 𝑡(1≤𝑡≤100) —the number of test cases.

This is followed by 𝑡 lines, each containing a description of one test case. The given
strings consist only of lowercase Latin letters and have lengths 
between 1 and 100 inclusive.

Output
For each test case, output on a separate line:

YES if the string in the corresponding test case is square,
NO otherwise.
You can output YES and NO in any case (for example, strings yEs, yes, Yes and YES will be recognized as a positive response).

*/

#include <bits/stdc++.h>
#include <iostream>

using namespace std;
 
int main()
{
    int n;
    cin >> n;
    
    int i = 0;
    while(i < n)
    {
        
        string s; cin >> s;
        
        if(s.length() % 2 == 1)
        {
            cout << "NO" << endl;
            i++;
            continue;
        }
        
        string s1;
        string s2;
        
        int m = s.length() / 2;
        
        for(int j = 0; j < m; j++)
        {
            s1 += s.at(j);
        }
        
        for(int j = m; j < s.length(); j++)
        {
            s2 += s.at(j);
        }
        
        if(s1 == s2) cout << "YES" << endl;
        else cout << "NO" << endl;
        
        i++;
    }
    
    return 0;
}