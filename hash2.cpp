/*

Write a program to count the frequency of characters in a string and answer queries about the frequency of specific characters.

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int hash[256] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        hash[s[i]]++;
    }

    int q;
    cin >> q;
    while (q--)
    {
        char c;
        cin >> c;
        cout << hash[c] << endl;
    }
    return 0;
}