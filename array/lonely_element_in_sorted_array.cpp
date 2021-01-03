#include<bits/stdc++.h>
using namespace std;


int main()
{
	int n,i;
	cin>>n;
	int a[n];

	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}

	int left,right,mid;

	left=0;
	right=n-1;

	while(left<=right)
	{
		mid=(left+right)/2;

		if( (mid%2==0 and a[mid]!=a[mid+1] ) or (mid%2==1 and a[mid]==a[mid-1]))
		{
			right=mid;
		}
		else if( (mid%2==0 and a[mid]==a[mid+1]) or (mid%2==1 and a[mid]==a[mid-1]))
		{
			left=mid;
		}
		else
		{
			cout<<a[mid]<<"\n";
			return 0;
		}
			
		
	}

	cout<<"there is no such character";
	return 0;
}
