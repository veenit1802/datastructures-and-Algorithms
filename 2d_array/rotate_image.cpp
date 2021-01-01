#include<bits/stdc++.h>
using namespace std;


int main()
{
	int i,j,n;
	cin>>n;

	int a[n][n];


	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}


	for(i=0;i<n;i++)
	{
		for(j=0;j<n/2;j++)
		{
			swap(a[i][j],a[i][n-1-j]);
		}
	}


	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			swap(a[i][j],a[j][i]);
		}
	}


	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<"\n";
	}


}
