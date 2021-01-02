#include<bits/stdc++.h>
using namespace std;


int main()
{

	int n;

	int i;
	cin>>n;
	vector<int>v;

	for(i=1;i<=n/2;i++)
	{
		v.push_back(i);
		v.push_back(-i);
	}
	if(n%2)
		v.push_back(0);


	for(i=0;i<n;i++)
	{
		cout<<v[i]<<" ";
	}


	return 0;
}
