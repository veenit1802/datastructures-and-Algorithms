#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin>>x;
    int count=0;
    while(x!=0)
    {
        x=(x&(x<<1));
        count++;
    }

    cout<<count<<"\n";

    return 0;
}