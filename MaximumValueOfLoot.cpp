#include <bits/stdc++.h>
using namespace std;
bool comparison(const pair<double,double> &a,const pair<double,double> &b)
{
    return (a.first/a.second > b.first/b.second);
}
int main()
{
    double n,w;
    cin>>n>>w;
    vector<pair<double,double>> v;
    double a,b;
    for(int i=0;i<(int)n;i++)
    {   cin>>a>>b;
        v.push_back(make_pair(a,b));
    }
    sort(v.begin(),v.end(),comparison);
    /*for(int i=0;i<v.size();i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }*/
    double ans=0,x=0;
    int i;
    for( i=0;i<v.size();i++)
    {   if(x+v[i].second<=w)
        {ans+=v[i].first;
        x+=v[i].second;}
        else {ans+=(w-x)*(v[i].first/v[i].second);break;}
    }
    /*if(x<w)
    {
    if(i!=v.size())
    
    else
    ans+=(w-x)*(v[v.size()-1].first / v[v.size()-1].second);
    }*/
    cout<<fixed;cout<<setprecision(3);
    cout<<ans;
    
    
    
}

