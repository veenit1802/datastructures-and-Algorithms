#include<bits/stdc++.h>
using namespace std;

int main()
{
    int row;
    cin>>row;
    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=row;j++)
        {
            if(j<=i)
            {
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }

        for(int j=1;j<=row;j++)
        {
            if(j>row-i)
            {
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<"\n";
    }


    for(int i=row;i>=1;i--)
    {
        for(int j=1;j<=row;j++)
        {
            if(j<=i)
            {
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }

        for(int j=1;j<=row;j++)
        {
            if(j>row-i)
            {
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<"\n";
    }
    return 0;
}