#include<bits/stdc++.h>
using namespace std;


int main()
{
	int n;
	cin>>n;
	int a[n],i,j;

	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}

	cout<<"\n\nunsorted array\n";

	for(i=0;i<n;i++)
		cout<<a[i]<<" ";

	cout<<"\n";

	for(i=1;i<n;i++)
	{
		int idx=i;

		for(j=i-1;j>=0 and a[j]>a[idx];j--)
		{
			if(a[j]>a[idx])
			{
				swap(a[j],a[idx]);
				idx=j;
			}
		}
	}
	
	cout<<"sorted array\n";

	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
