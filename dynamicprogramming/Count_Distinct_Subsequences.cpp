#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int n=s.length(),i;
    unordered_map<char,int>mp;
    long long int dp[n+10];
    memset(dp,0,sizeof(dp));
    dp[0]=1;
    for(int i=1;i<=n;i++)
    {
      
        dp[i]=2*dp[i-1];
        int pos=i-1;

        if(mp.find(s[pos]) != mp.end())
        {
            dp[i]=dp[i]-dp[ mp[ s[pos] ] -1];
            
        }
        //   cout<<dp[i]<<" ";
        mp[s[pos]]=i;
    }

    cout<<dp[n]-1;

    return 0;
}