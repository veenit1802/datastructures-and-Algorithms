#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1,s2;
    cin>>s1>>s2;
    int n,m;
    n=s1.length();
    m=s2.length();
    int i,j;
    int a[n+1][m+1];
    memset(a,0,sizeof(a));
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(s2[j]==s1[i])
            {
                a[i+1][j+1]=a[i][j]+1;
            }
            else{
                a[i+1][j+1]=max(a[i+1][j],a[i][j+1]);
            }
        }
    }

    cout<<a[n][m]<<"\n";
}