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

    int k;
    cin>>k;
    int i=0,sum=0,j=0;
    while(i<n or j<=i)
    {
        if(sum<k and i<n)
        {
            sum+=a[i];
            i++;
        }
        else if(sum>k and j<i)
        {
            sum-=a[j];
            j++;
        }
        else if(sum==k)
        {
            cout<<j+1<<" "<<i<<"\n";
            goto fact;
        }
        else{
            break;
        }
    }

    if(sum==k)
    {
        cout<<j<<" "<<i<<"\n";
    }

    fact:;
    return 0;
}