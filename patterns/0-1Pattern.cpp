#include<bits/stdc++.h>
using namespace std;

int main()
{
    int row;
    cin>>row;
    int cnt=1;
    for(int i=1;i<=row;i++)
    {
        if(i%2)
        {
            cnt=1;
        }
        else{
            cnt=0;
        }
        for(int j=1;j<=i;j++)
        {
            cout<<cnt<<" ";
            cnt=!cnt;
        }
        cout<<"\n";
    }
}