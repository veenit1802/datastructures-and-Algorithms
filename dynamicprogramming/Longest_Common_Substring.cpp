#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1;
    string s2;
    cin>>s1>>s2;
    int n,m;
    n=s1.length();
    m=s2.length();

    int dp[2][m+1];

    memset(dp,0,sizeof(dp));
    int res=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(s1[i-1]==s2[j-1])
            {
                dp[i%2][j]=dp[(i-1)%2][j-1]+1;
                if(dp[i%2][j]>res)
                {
                    res=dp[i%2][j];
                }
            }
            else{
                dp[i%2][j]=0;
            }
        }
    }
    cout<<res;

}