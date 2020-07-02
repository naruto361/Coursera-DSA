#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    long long int f[60];
    f[0]=0;
    f[1]=1;
    long long int sum[60];
    sum[0]=0;sum[1]=1;
    for(int i=2;i<60;i++)
    {   
        f[i]=(f[i-1]%10 + f[i-2]%10)%10;
        sum[i]=(sum[i-1]%10 + f[i]%10 )%10;
    }    
    long long int j=n/60;
    int k=n%60;
    cout<<j*sum[59] + sum[k];
    
   
}
    
