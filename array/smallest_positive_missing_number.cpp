#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n],i;

    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    bool b[1000001]={false};

    for(i=0;i<n;i++)
    {
        if(a[i]>-1)
        {
            b[a[i]]=true;
        }
    }

    for(i=0;i<=1000001;i++)
    {
        if(!b[i])
        {
            cout<<i<<"\n";
            break;
        }
    }

    return 0;
}