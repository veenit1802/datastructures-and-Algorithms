#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    int numberToFind;
    cin>>numberToFind;
    
    for(i=0;i<n;i++)
    {
        if(a[i]==numberToFind)
        {
            cout<<"number is at the location "<<i+1<<"\n";
            break;
        }
    }
    
    if(i==n)
        cout<<"number is not present\n";
    
    
    return 0;
}
