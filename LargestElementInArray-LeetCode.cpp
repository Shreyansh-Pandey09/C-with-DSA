#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter size array you want: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int maxi=arr[0];
    for(int i=0; i<n; i++){
        if(arr[i]>maxi){
            maxi=arr[i];
        }
    }
    cout<<"Largest element is: "<<maxi<<endl;
    return 0;
}