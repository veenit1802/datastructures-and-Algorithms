#include<bits/stdc++.h>
using namespace std;


int main()
{
	int n,m,i,j,k,l,o,p;
	cin>>n>>m;
	int a[n][m];
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		cin>>a[i][j];
	}
	long long sum=0;



	/*
	 * this method take O(n^6) for calculating the sum of all the sub matrix which is high
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			for(k=i;k<n;k++)
			{
				for(l=j;l<m;l++)
				{
					for(o=i;o<=k;o++)
					{
						for(p=j;p<=l;p++)
						{
							sum+=a[o][p];
						}
					}
				}
			}
		}
	}
	*/
	//there is another way of doing it which is having the complexity of O(n^2)
	//this method takes O(n^2) time to run
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			sum+=a[i][j]*((i+1)*(j+1)*(n-i)*(m-j));
		}
	}
	cout<<sum<<"\n";



//	cout<<sum<<"\n";
	return 0;
}
