#include<bits/stdc++.h>
using namespace std;

/*
 * Distribute Candies
 * Simple check the number of the unique candies present in the array by using map or set
 */

int main()
{
	int n;
	cin>>n;
	int a[n],i;

	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}

	unordered_map<int,bool>mp;

	for(i=0;i<n;i++)
	{
		mp[a[i]]=true;
	}

	cout<<mp.size()<<"\n";
	
	return 0;
}
