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
    int dp[n];
    dp[0]=1;
    int maxnum=1;
    for(i=1;i<n;i++)
    {
        dp[i]=1;
        for(int j=i-1;j>0;j--)
        {
            if(v[i].first>v[j].first and v[i].second>v[j].second)
            {
                dp[i]=max(dp[i],dp[j]+1);
            }
            
        }
        maxnum=max(dp[i],maxnum);
    }
    cout<<maxnum;




    return 0;
}