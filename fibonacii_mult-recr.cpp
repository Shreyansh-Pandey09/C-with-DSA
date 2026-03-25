#include<bits/stdc++.h>
using namespace std;
void f(int n){
    if(n<=1)
        return n;
    
    int l = f(n-1);
    int slast = f(n-2);

    return last + slast;
}

int main()
{
    int n;
    cin>>n;
    cout<<f(n);
    return 0;
}