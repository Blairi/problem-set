/*
 *
A. Nearly Lucky Number
time limit per test 2 seconds
memory limit per test 256 megabytes
inputstandard input
outputstandard output

Petya loves lucky numbers. We all know that lucky numbers are 
the positive integers whose decimal representations contain 
only the lucky digits 4 and 7. For example, numbers 47, 744, 
4 are lucky and 5, 17, 467 are not.

Unfortunately, not all numbers are lucky. Petya calls a number 
nearly lucky if the number of lucky digits in it is a lucky number. 
He wonders whether number n is a nearly lucky number.

Input
The only line contains an integer n (1 ≤ n ≤ 1018).

Please do not use the %lld specificator to read or 
write 64-bit numbers in С++. It is preferred to use the cin, 
cout streams or the %I64d specificator.

Output
Print on the single line "YES" if n is a nearly lucky number. 
Otherwise, print "NO" (without the quotes).

*/

#include <bits/stdc++.h>
#include <iostream>

using namespace std;
 
int main()
{
    string n; cin >> n;

    int cont = 0;
    for(auto c : n)
    {
        if(c == '7' || c == '4') cont++;
    }

    if(cont == 7 || cont == 4) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}
