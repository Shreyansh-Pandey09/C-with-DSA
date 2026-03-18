// print numbers from 1 to n using recursion but with using backtracking technique

#include<bits/stdc++.h>
using namespace std;

void f(int i, int n){
    if(i<1)
        return;
    
    f(i-1,n);
    cout<<i<<endl;

}
int main(){
    int n;
    cin>>n;
    f(n,n);
    return 0;
}