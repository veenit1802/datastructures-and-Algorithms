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
    int max_cnt=1,firstdiff=a[1]-a[0],cnt=1;
    for(int i=1;i<n-1;i++)
    {
        if(firstdiff==a[i+1]-a[i])
        {
            cnt+=1;
        }
        else{
            firstdiff=a[i+1]-a[i];
            cnt=1;
        }

        max_cnt=max(max_cnt,cnt);
    }
    cout<<max_cnt+1<<"\n";

    return 0;
}