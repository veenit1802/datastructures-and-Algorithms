#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int dp[n];
    dp[0]=1;
    int maxer=0,totmax=1;
    for(int i=1;i<n;i++)
    {
        maxer=0;
        for(int j=i-1;j>=0;j--)
        {
            if(a[i]>a[j])
            {
                maxer=max(maxer,dp[j]);
            }
        }
        dp[i]=maxer+1;
        totmax=max(totmax,dp[i]);
    }

    cout<<totmax<<"\n";
}