#include<bits/stdc++.h>
using namespace std;

int main()
{
    int size;
    cin>>size;
    int a[size];
    for(int i=0;i<size;i++)
    {
        cin>>a[i];
    }
    int x;
    cin>>x;
    unordered_set<int>s;
    for(int i=0;i<size;i++)
    {
        int temp=x-a[i];
        if(s.find(temp)!=s.end())
        {
            cout<<"Pair with given sum"<<x<<" is("<<a[i]<<","<<temp<<")"<<endl; 
        }
        s.insert(a[i]);
    }
    return 0;
}