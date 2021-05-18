#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n+2];
    a[0]=INT_MIN+50;
    a[n+1]=INT_MIN+100;

    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }

    int max_till_now=0,cnt=0;
    
    for(int i=1;i<=n;i++)
    {
            if(a[i]>max_till_now and a[i]>a[i+1])
            {
                cnt++;
            }

            max_till_now=max(max_till_now,a[i]);
    }

    cout<<cnt<<"\n";
}