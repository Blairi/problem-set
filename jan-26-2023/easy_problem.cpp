/*
A. In Search of an Easy Problem
time limit per test 1 second
memory limit per test 256 megabytes
inputstandard input
outputstandard output

When preparing a tournament, Codeforces coordinators try treir best to make the first 
problem as easy as possible. This time the coordinator had chosen some problem and asked 𝑛
people about their opinions. Each person answered whether this problem is easy or hard.

If at least one of these 𝑛 people has answered that the problem is hard, the coordinator 
decides to change the problem. For the given responses, check if the problem is easy enough.

Input
The first line contains a single integer 𝑛 (1≤𝑛≤100) — the number of people who 
were asked to give their opinions.

The second line contains 𝑛 integers, 
each integer is either 0 or 1. If 𝑖-th integer is 0, 
then 𝑖-th person thinks that the problem is easy; 
if it is 1, then 𝑖-th person thinks that the problem is hard.

Output
Print one word: "EASY" if the problem is easy according to all responses, or "HARD" 
if there is at least one person who thinks the problem is hard.

You may print every letter in any register: "EASY", "easy", "EaSY" and "eAsY" all will be processed correctly.

*/
#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    int n; cin >> n;

    int a[n];
    for(int i = 0; i < n; i++)
    {
	cin >> a[i];
    }

    
    for(int i = 0; i < n; i++)
    {
	if(a[i] == 1)
	{
	    cout << "HARD" << endl;
	    return 0;
	}
    }
    
    cout << "EASY" << endl;
    return 0;
}


