#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,m,i,j;
	cin>>n>>m;
	int a[n][m];

	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			cin>>a[i][j];
		}
	}
	
	int cnt;

	while(cnt<=n/2)
	{
		

		for(j=cnt;j<m-cnt;j++)
		{
			cout<<a[cnt][j]<<" ";
		}

		if(cnt<n/2)
		{
			j=m-cnt-1;
			for(i=cnt+1;i<n-cnt;i++)
			{
				cout<<a[i][j]<<" ";
			}
		}

		if(n-cnt-1>n/2)
		{
			i=n-cnt-1;

			for(j=m-2-cnt;j>=cnt;j--)
				cout<<a[i][j]<<" ";
		}
		if(m-cnt-1>=n/2)
		for(i=n-cnt-2;i>cnt;i--)
		{
			cout<<a[i][cnt]<<" ";
		}
		cnt++;
	}
}



 
