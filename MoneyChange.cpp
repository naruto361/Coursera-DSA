#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int x,y,z;
    x=n/10;
    n=n-x*10;
    y=n/5;
    n=n-y*5;
    z=n;
    cout<<x+y+z;
    
    
}
