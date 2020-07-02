#include <iostream>

using namespace std;

int main()
{
    int d,m,n;
    cin>>d>>m>>n;
    if(m>=d) {cout<<0;exit(0);}
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    for(int i=1;i<n;i++)
    {
        if(a[i]-a[i-1]>m)
        {cout<<-1;exit(0);}
    }
    if(d-a[n-1] > m) {cout<<-1;exit(0);}
    int refills=0,start=0;
    for(int i=0;i<n;i++)
    {   
        if(d-a[i]<=m)
           { refills++;break;}
        if(a[i]-start<=m && a[i+1]-start>m)
        {refills++;
        start=a[i];
        }
        else if(a[i]-start==m)
        {
            refills++;
            start=a[i];
        }       
    }
    cout<<refills;
}
