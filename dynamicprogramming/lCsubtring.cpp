#include<bits/stdc++.h>
using namespace std;
string LCS(string X,string Y,int m,int n)
{
	int maxlen=0;
	int endingIndex=0;
	int lookup[m+1][n+1];
	memset(lookup,0,sizeof(lookup));
	for(int i=1;i<m;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(X[i-1]==Y[j-1])
			{
				lookup[i][j]=lookup[i-1][j-1]+1;
				if(lookup[i][j]>maxlen)
				{
					maxlen=lookup[i][j];
					endingIndex=i;
				}
			}
		}
	}

	return X.substr(endingIndex-maxlen,maxlen);	
}

int main()
{
	string X="ABC",Y="BABA";

	int m=int(X.length()),n=int(Y.length());

	cout<<LCS(X,Y,m,n);

	return 0;
}
