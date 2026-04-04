#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin>>str;
    
    map<char, int>mpp;
    for(int i=0; i<str.size(); i++){
        mpp[str[i]]++;
    }

    int q; 
    cin>>q;
    while(q--){
        char c;
        cin>>c;
        cout<<mpp[c]<<endl;
    }
    return 0;
}