// print numbers from n to 1 using recursion

#include<bits/stdc++.h>
using namespace std;

void f(int n){
    if(n==0)
        return;
    
    cout<<n<<endl;
    f(n-1);
}
int main()
{
    int n; 
    cin>>n;
    f(n);
    return 0;
}