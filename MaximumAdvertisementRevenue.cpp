#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    long long int a[n],b[n];
    for(int i=0;i<n;i++)
       cin>>a[i];
    for(int i=0;i<n;i++)
       cin>>b[i];
    sort(a,a+n);
    sort(b,b+n);
    /*for(int i=0;i<n;i++)
       cout<<a[i]<<" ";
       cout<<endl;
    for(int i=0;i<n;i++)
       cout<<b[i]<<" ";
       cout<<endl;*/
    long long int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=a[i]*b[i];
        //cout<<sum<<" ";
    }
    //cout<<endl;
    cout<<sum;
   
}
