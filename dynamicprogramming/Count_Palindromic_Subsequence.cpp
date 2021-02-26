#include<bits/stdc++.h>
using namespace std;


int main()
{
    string s;
    cin>>s;
    int n=s.length(),i,j,k;
    bool dp[n][n];
    memset(dp,false,sizeof(dp));

    for(k=0;k<n;k++)
    {
        for(i=0,j=k;i<n and j<n;i++,j++)
        {
            if(k==0)
            {
                dp[i][j]=true;
            }
            else if(k==1)
            {
                if(s[i]==s[j])
                {
                    dp[i][j]=true;
                }
            }
            else if(s[i]==s[j])
            {
                dp[i][j]=dp[i+1][j-1];
            }
        }
    }
    int cnt=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(dp[i][j])
            {
                cnt++;
            }
        }
    }

    cout<<cnt<<"\n";
}