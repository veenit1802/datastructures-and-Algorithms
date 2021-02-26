#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int i,j,k;
    cin>>s;
    int n=s.length();
    int dp[n][n];
    memset(dp,0,sizeof(dp));
    for(k=0;k<n;k++)
    {
        for(i=0,j=k;i<n and j<n;i++,j++)
        {
            if(i==j)
            {
                dp[i][j]=1;
            }
            else{
                if(s[i]==s[j])
                {
                    dp[i][j]=dp[i][j-1]+dp[i+1][j]+1;
                }
                else{
                    dp[i][j]=dp[i][j-1]+dp[i+1][j]-dp[i+1][j-1];
                }
            }
        }
    }
    cout<<dp[0][n-1];
}