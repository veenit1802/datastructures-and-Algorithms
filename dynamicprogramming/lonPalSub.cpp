#include<bits/stdc++.h>
using namespace std;

int longestPalindrome(string x,int i,int j,auto &lookup)
{
	if(i>j)
		return 0;
	if(i==j)
		return 1;
	string key=to_string(i)+"|"+to_string(j);
	if(lookup.find(key)==lookup.end())
	{
		if(x[i]==x[j])
		lookup[key]= longestPalindrome(x,i+1,j-1,lookup)+2;
		else
		lookup[key]= max( longestPalindrome(x,i+1,j,lookup),longestPalindrome(x,i,j-1,lookup) );
	}
	return lookup[key];
}

int main()
{
	string x="ABBDCACB";
	int n=x.length();
	unordered_map<string,int>lookup;
	cout<<longestPalindrome(x,0,n-1,lookup);


	return 0;
}
