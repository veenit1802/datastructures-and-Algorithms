#include<bits/stdc++.h>
using namespace std;


int main()
{
	int n;
	cin>>n;

	int a[n],i,j;

	for(i=0;i<n;i++)
		cin>>a[i];
	cout<<"\n\nunsorted aray\n";
	for(i=0;i<n;i++)
		cout<<a[i]<<" ";
	cout<<"\n";
	int minimum,idx;

	for(i=0;i<n;i++)
	{
		minimum=a[i];
		idx=i;

		for(j=i+1;j<n;j++)
		{
			if(minimum>a[j])
			{
				minimum=a[j];
				idx=j;
			}
		}

		swap(a[i],a[idx]);
	}

	
	cout<<"sorted array\n";

	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
