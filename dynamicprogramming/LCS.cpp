#include<bits/stdc++.h>
using namespace std;

int LCS(string x,string y,int n,int m,auto &lookup)
{
	if(n<0 or m<0)
		return 0;
	string key=	to_string(m)	+	"|"	+	to_string(n);
	
	if(lookup.find(key)==lookup.end())
	{
	
		if(x[n]==y[m])
			lookup[key]= LCS(x,y,n-1,m-1,lookup)+1;
		else
			lookup[key]= max( LCS(x,y,n-1,m,lookup),LCS(x,y,n,m-1,lookup));
	}
	
	return lookup[key];
}



int main()
{
	string x="ABCBDAB",y="BDCABA";
	unordered_map<string,int>lookup;
	cout<<LCS(x,y,x.length()-1,y.length()-1,lookup);
}
