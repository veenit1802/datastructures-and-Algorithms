#include<bits/stdc++.h>
using namespace std;

int LRSLength(string x,int m,int n,auto &lookup)
{
	if(m==0 || n==0)
		return 0;
	string key=to_string(m)+"|"+to_string(n);
	if(lookup.find(key)==lookup.end())
	{
		if(x[m-1]==x[n-1] and m!=n)
			lookup[key]= LRSLength(x,m-1,n-1,lookup)+1;
		else
			lookup[key]= max( LRSLength(x,m-1,n,lookup),LRSLength(x,m,n-1,lookup) );
	}

	return lookup[key];
}

int main()
{
	string x="ATACTCGGA";
	int m=x.length();
	unordered_map<string,int>lookup;
	cout<<LRSLength(x,m,m,lookup);
}
