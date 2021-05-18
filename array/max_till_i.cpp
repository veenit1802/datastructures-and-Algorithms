#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int maxnum=INT_MIN;
    for(int i=0;i<n;i++)
    {
        maxnum=max(maxnum,a[i]);
        cout<<"max till i="<<i<<" "<<maxnum<<"\n";
    }

    return 0;
}