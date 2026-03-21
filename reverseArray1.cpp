#include<bits/stdc++.h>
using namespace std;

void f(int a[], int i, int n){
    if(i>=n/2) return;

    swap(a[i], a[n-i-1]);
    f(a, i+1, n);
}

int main(){
    int n; 
    cout<<"Enter the size of array : ";
    cin>>n;
    int a[n];
    cout<<"Enter the elements of array : ";
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    f(a, 0, n);
    cout<<"reversed array is : ";
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    return 0;

}