#include<bits/stdc++.h>
using namespace std;


int main()
{
	int n,sum=0;

	cin>>n;
	int k=5;
	for(;k<=n;)
	{
		sum+=n/k;
		k=k*5;
	}
	cout<<sum<<"\n";


	return 0;
}
