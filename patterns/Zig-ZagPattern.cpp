#include<bits/stdc++.h>
using namespace std;

int main()
{
    int col;
    cin>>col;

    for(int i=1;i<=3;i++)
    {
        for(int j=1;j<=col;j++)
        {
            if(i==1 and (j%4==3))
            {
                cout<<"* ";
            }
            else if(i==2 and j%2==0)
            {
                cout<<"* ";
            }
            else if(i==3 and (j==1 or j%4==1))
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