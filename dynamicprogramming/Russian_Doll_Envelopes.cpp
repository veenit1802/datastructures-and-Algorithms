#include<bits/stdc++.h>
using namespace std;

bool cmp(const pair<int,int>&a,const pair<int,int>&b)
{
    if(a.first==b.first)
    {
        return a.second<b.second;
    }
    return a.first<b.first;
}

int main()
{
    int n,i;
    cin>>n;

    vector<pair<int,int>>v;
    int l,r;
    for(i=0;i<n;i++)
    {
        cin>>l>>r;
        v.push_back({l,r});
    }

    sort(v.begin(),v.end(),cmp);


    return 0;
}