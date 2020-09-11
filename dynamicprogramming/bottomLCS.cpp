#include<bits/stdc++.h>
using namespace std;


int main()
{
	string x="XMJYAUZ",y="MZJAWXU";

	int i,j,m=x.length(),n=y.length();
	int a[m+1][n+1];

	memset(a,0,sizeof(a));

	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(x[i-1]==y[j-1])
			{
				a[i][j]=1+a[i-1][j-1];
			}
			else
			{
				a[i][j]=max(a[i][j-1],a[i-1][j]);
			}
		}
	}

	cout<<a[m][n]<<"\n";



	return 0;
}
