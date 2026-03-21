#include<bits/stdc++.h>
using namespace std;

void f(int a[], int i, int j){
    if(i>=j)
        return;
        
    swap(a[i], a[j]);
    f(a, i+1, j-1);
}
int main(){
    int a[5] = {1,2,3,4,5}; 
    int n=5;

    f(a, 0, n-1);
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    // cout<<endl;


    return 0;
}