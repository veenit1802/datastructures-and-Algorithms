#include<bits/stdc++.h>
using namespace std;

int main()
{
    int row;
    cin>>row;
    int sum=0;
    for(int i=1;i<=row;i++)
    {
        
        for(int j=1;j<=i;j++)
        {sum++;
            cout<<sum<<" ";
        }
        cout<<"\n";
    }
}