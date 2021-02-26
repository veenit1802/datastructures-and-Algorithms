#include<bits/stdc++.h>
using namespace std;


int main()
{
    string s;
    cin>>s;
    int n=s.length(),i,j,k;
    bool dp[n][n];
    memset(dp,0,sizeof(dp));
    int maxsize=1;
    for(k=0;k<n;k++)
    {
        for(i=0,j=k;j<n;j++,i++)
        {
            if(k==0)
            {
                dp[i][j]=true;
            }
            else if(k==1)
            {
                if(s[i]==s[j])
                {
                    maxsize=2;
                    dp[i][j]=true;
                }
            }
            else
            {
                if(s[i]==s[j])
                {
                    dp[i][j]=dp[i+1][j-1];
                }
                if(dp[i][j])
                {
                    maxsize=max(maxsize,j-i+1);
                }
            }
        }
    }
    cout<<maxsize;
}