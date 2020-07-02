#include<bits/stdc++.h>
using namespace std;
int gcd(long long int,long long int);
int main()
{long long int a,b;
cin>>a>>b;
cout<<gcd(a,b);

    
}
int gcd(long long int x,long long int y)
{
    if(x==0) return y;
    if(y==0) return x;
    if(x>=y) return gcd(x%y,y);
    else return gcd(x,y%x);
}
    
