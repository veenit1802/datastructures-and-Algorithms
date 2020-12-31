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
    
    int max_number=INT_MIN,min_number=INT_MAX;
    
    //if number is off same parity then we can use the first element as max and min and compare with it
    
    for(i=0;i<n;i++)
    {
        if(a[i]>max_number)
        {
            max_number=a[i];
        }
        if(min_number>a[i])
        {
            min_number=a[i];
        }
    }
    
    cout<<"max number found "<<max_number<<" min number found "<<min_number<<"\n";
    return 0;
}
