#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin>>n;
    int a[n],dp[n];

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int totmax=a[0];
    dp[0]=a[0];
    for(int i=1;i<n;i++)
    {
        dp[i]=a[i];
        for(int j=i-1;j>=0;j--)
        {
            if(a[i]>=a[j])
            {
                dp[i]=max( dp[i],a[i]+dp[j] );
            }
        }
        totmax=max(totmax,dp[i]);
    }

    cout<<totmax<<"\n";

}