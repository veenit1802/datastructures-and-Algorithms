#include<bits/stdc++.h>
using namespace std;

int LRSLength(string x,int m,int n)
{
	if(m==0 || n==0)
		return 0;
		
	if(x[m-1]==x[n-1] and m!=n)
		return LRSLength(x,m-1,n-1)+1;
	return max( LRSLength(x,m-1,n),LRSLength(x,m,n-1) );
}

int main()
{
	string x="ATACTCGGA";
	int m=x.length();
	cout<<LRSLength(x,m,m);
}
