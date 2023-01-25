/*
A. Word
time limit per test 2 seconds
memory limit per test 256 megabytes
inputstandard input
outputstandard output
Vasya is very upset that many people on the Net mix uppercase 
and lowercase letters in one word. That's why he decided to 
invent an extension for his favorite browser that would change 
the letters' register in every word so that it either only 
consisted of lowercase letters or, vice versa, only of uppercase 
ones. At that as little as possible letters should be changed
in the word. For example, the word HoUse must be replaced 
with house, and the word ViP — with VIP. If a word contains an 
equal number of uppercase and lowercase letters, you should 
replace all the letters with lowercase ones. 

For example, maTRIx should be replaced by matrix. 

Your task is to use the given method on one given word.

Input
The first line contains a word s — it consists of uppercase and 
lowercase Latin letters and possesses the length from 1 to 100.

Output
Print the corrected word s. If the given word s has strictly more 
uppercase letters, make the word written in the uppercase register, 
otherwise - in the lowercase one.
*/

#include <bits/stdc++.h>
#include <iostream>

using namespace std;
 
int main()
{
    string s; cin >> s;
    
    string s_out;
    
    int l = 0, u = 0;
    for(int i =0; i < s.length(); i++)
    {
        char c = s.at(i);
        int asc = int(c); // ASCII value
        
        if( asc >= 65 && asc <= 90) u ++;
        if( asc >= 97 && asc <= 122) l ++;
    }
    
    for(int i =0; i < s.length(); i++)
    {
        char c = s.at(i);
        int asc = int(c);

        if( u > l) // uppercase
        {
            if( asc >= 97 && asc <= 122 )
            {
                asc -= 32;
            }
        }
        
        else if( u < l ) // lowercase
        {
            if( asc >= 65 && asc <= 90 )
            {
                asc += 32;
            }
        }
        
        else // lowercase
        {
            if( asc >= 65 && asc <= 90 )
            {
                asc += 32;
            }
        }

        s_out += char(asc);
    }
    
    cout << s_out << endl;
    
    return 0;
}