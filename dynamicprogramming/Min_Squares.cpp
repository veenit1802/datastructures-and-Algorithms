#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i;
    cin>>n;
    long long int a[n+1];
    memset(a,0,sizeof(a));
    a[1]=1;

    for(i=2;i<=n;i++)
    {
        a[i]=INT_MAX;
        for(int j=1;j*j<=i;j++)
        {
            a[i]=min(a[i],a[i-j*j]+1);
        }
    }

    cout<<a[n]<<" ";
}