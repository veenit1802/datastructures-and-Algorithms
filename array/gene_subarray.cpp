#include<bits/stdc++.h>
using namespace std;


int main()
{
	int n;
	cin>>n;
	int a[n],i,j;

	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}

	for(i=0;i<n;i++)
	{
		string s;
		s+=to_string(a[i])+",";
		cout<<s<<"\n";
		for(j=i+1;j<n;j++)
		{
			s+=" "+to_string(a[j])+",";
			cout<<s<<"\n";
		}
	}

	//there is one more way of generating the subarray but it takes O(n^3) time to generate all the subarray
}
