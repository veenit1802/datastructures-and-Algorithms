#include<bits/stdc++.h>
using namespace std;

bool cmp(const pair<int,int>&a,const pair<int,int>&b)
{
    return a.first==b.first?a.second-b.second:a.first-b.first;
}

int main()
{
    int n;
    cin>>n;
    vector<pair<int,int>>v;
    int l,r,i;
    for(i=0;i<n;i++)
    {
        cin>>l>>r;
        v.push_back({l,r});
    }

    sort(v.begin(),v.end(),cmp);

    int dp[n],maxbridge=1;
    dp[0]=1;
    for(int i=1;i<n;i++)
    {
        dp[i]=1;

        for(int j=i-1;j>=0;j--)
        {
            if(v[j].second<v[i].second)
            {
                dp[i]=max(dp[i],dp[j]+1);
            }
        }

        maxbridge=max(maxbridge,dp[i]);
    }
    cout<<maxbridge;
    return 0;
}