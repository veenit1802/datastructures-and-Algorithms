#include<bits/stdc++.h>
using namespace std;


int main()
{
	int n,m,i,j,k,maxer;
	cin>>n>>m>>maxer>>k;
	int a[n][m];

	char c;
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			cin>>c;
			if(c=='.')
			{
				a[i][j]=1;
			}
			else if(c=='*')
			{
				a[i][j]=2;
			}
			else
				a[i][j]=3;
		}
	}

	
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(j!=0)
			{
				k-=1;
			}

			if(a[i][j]==1)
			{
				k-=2;
				
			}
			else if(a[i][j]==2)
			{
				k+=5;
			}
			else if(a[i][j]==3)
			{
				
				break;
			}
		
			if(k<maxer)
			{
				cout<<"Not possible";
				return 0;
			}
		}
	}
	
		cout<<k;
	
	return 0;
}
