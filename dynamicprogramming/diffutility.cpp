#include<bits/stdc++.h>
using namespace std;

int lookup[30][30];

void diff(string X, string Y, int m, int n)
{
	
	if (m > 0 && n > 0 && X[m - 1] == Y[n - 1])
	{
		diff(X, Y, m - 1, n - 1);
		cout << " " << X[m - 1];
	}

	
	else if (n > 0 && (m == 0 || lookup[m][n - 1] >= lookup[m - 1][n]))
	{
		diff(X, Y, m, n - 1);
		cout << " +" << Y[n - 1];
	}

	
	else if (m > 0 && (n == 0 || lookup[m][n - 1] < lookup[m - 1][n]))
	{
		diff(X, Y, m - 1, n);
		cout << " -" << X[m - 1];
	}
}

void lcs_length(string x,string y,int m,int n)
{
	for(int i=0;i<=m;i++)
	{
		lookup[i][0]=0;
	}
	for(int j=0;j<=n;j++)
	{
		lookup[0][j]=0;
	}

	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(x[i-1]==y[j-1])
				lookup[i][j]=1+lookup[i-1][j-1];
			else
				lookup[i][j]=max(lookup[i-1][j],lookup[i][j-1]);
		}
	}
}

int main()
{
	string x="ABCDFGHJQZ";
	string y="ABCDEFGIJKRXYZ";
	int m=x.length(),n=y.length();
	
	lcs_length(x,y,m,n);
	diff(x,y,m,n);

	return 0;
}
