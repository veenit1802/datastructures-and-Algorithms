#include<bits/stdc++.h>
using namespace std;

int dp[20][20];

int Longest_Palindromic_Sequence(string s,int i,int j)
{
    if(i>j)
    {
        return 0;
    }

if(dp[i][j]!=-1)
{
    return dp[i][j];
}

    if(s[i]==s[j])
    {
        if(i==j)
            return  dp[i][j]=1+Longest_Palindromic_Sequence(s,i+1,j-1);
        else
            return  dp[i][j]=2+Longest_Palindromic_Sequence(s,i+1,j-1);
    }
    else 
    return dp[i][j]=max({Longest_Palindromic_Sequence(s,i,j-1),Longest_Palindromic_Sequence(s,i+1,j)});
}

int main()
{
    memset(dp,-1,sizeof(dp));
    string s;
    cin>>s;
    int n=s.length();
    cout<<n;
    cout<<Longest_Palindromic_Sequence(s,0,n-1);
}



/*
   bottom up approach

   int dp[n][n];
   memset(dp,0,sizeof(dp));

    int i,j,k;

    for(k=0;k<str.length();k++)
    {
        for(i=0,j=k;i<str.length() and j<str.length();i++,j++)
        {
            if(i==j)
            {
                dp[i][j]=1;
            }
            else if(k==1)
            {
                dp[i][j]=s[i]==s[j]?2:1;
            }
            else
            {
                if(s[i]==s[j])
                {
                    dp[i][j]=2+d[i+1][j-1];
                }
                else{
                    dp[i][j]=max(dp[i][j-1],dp[i+1][j]);
                }
            }
        }
    }
*/