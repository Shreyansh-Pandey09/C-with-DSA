/*
This program is used to count the frequency of elements in an array and answer queries about the frequency of specific numbers. It uses a
map (hash table) to store the frequency of each element in the array, allowing for efficient lookups when answering queries.
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        mpp[arr[i]]++;
    }

    // Dono method shi hai but wese krne se time complexity O(NxN) hogi but ese mai O(2n) hogi

    // map<int, int> mpp;
    // for(int i=0; i<n; i++){
    //     mpp[arr[i]] ++;
    // }

    int q;
    cin >> q;
    while (q--)
    {
        int number;
        cin >> number;
        cout << mpp[number] << endl;
    }
    return 0;
}