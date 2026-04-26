#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;    
    int arr[n];
    for(int i=0; i<n ; i++){
        cin>>arr[i];
    }
    set<int> st(arr, arr+n);

    int index=0;
    for(auto it: st){
        arr[index]=it;
        index++;
    }
    for(int i=0; i<index; i++){
        cout<<arr[i]<<" ";
    }
    return 0;}