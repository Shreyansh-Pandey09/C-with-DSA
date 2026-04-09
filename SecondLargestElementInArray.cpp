#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int maxi=arr[0];
    for(int i=0; i<n; i++){
        if(arr[i]>maxi){
            maxi=arr[i];
        }
    }
    cout<<"largest element is: "<<maxi<<endl;
    int sl=-1;
    for(int i=0; i<n; i++){
        if(arr[i]>sl && arr[i]!=maxi){
            sl=arr[i];
        }
    }
    cout<<"Second largest element is: "<<sl<<endl;
    return 0;
}