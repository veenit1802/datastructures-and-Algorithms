#include<bits/stdc++.h>
using namespace std;

int longestPalindrome(string x,int i,int j)
{
	if(i>j)
		return 0;
	if(i==j)
		return 1;
	if(x[i]==x[j])
		return longestPalindrome(x,i+1,j-1)+2;
	return max( longestPalindrome(x,i+1,j),longestPalindrome(x,i,j-1) );
}

int main()
{
	string x="ABBDCACB";
	int n=x.length();

	cout<<longestPalindrome(x,0,n-1);


	return 0;
}
