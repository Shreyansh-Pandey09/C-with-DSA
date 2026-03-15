#include<bits/stdc++.h>
using namespace std;

int c=0;
void print()
{
    if(c==3)
    return;

    cout<< c << endl;
    c++;
    print();
   
}
int main()
{
    print();
    return 0;
}
