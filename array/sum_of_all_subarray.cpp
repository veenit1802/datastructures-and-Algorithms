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

    int repeated=0;
    long long int sum=0,sum2=0;
    
    for(int i=0;i<n;i++)
    {
    
        sum+=(n-i)*a[i] + repeated*a[i];
        sum2+=a[i]*(i+1)*(n-i);
        repeated+=(n-i-1);
        if(i!=0)
        {
            repeated-=1;
        }
    }

    cout<<sum<<" "<<sum2<<"\n";
}