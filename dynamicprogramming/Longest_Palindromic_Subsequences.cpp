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