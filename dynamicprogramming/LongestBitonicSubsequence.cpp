#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    int dpfront[n],dpreverse[n];
    dpfront[0]=1;
    dpreverse[n-1]=1;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(int i=1;i<n;i++)
    {
        dpfront[i]=1;
        for(int j=i-1;j>=0;j--)
        {
            if(a[i]>=a[j])
            {
               dpfront[i]=max(dpfront[i],dpfront[j]+1); 
            }
        }
    }

    for(int i=n-2;i>=0;i--)
    {
        dpreverse[i]=1;
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>=a[j])
            {
                dpreverse[i]=max(dpreverse[i],dpreverse[j]+1);
            }
        }
    }

    int maxout=0;
    for(int i=0;i<n;i++)
    {
        maxout=max(maxout,dpfront[i]+dpreverse[i]);
    }

    cout<<maxout-1<<"\n";
}