#include<bits/stdc++.h>
using namespace std;


int main()
{
	int n,i;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
		cin>>a[i];
	int to_find;
	cin>>to_find;
	sort(a,a+n);

	int first=0,last=n-1,mid;

	while(first<=last)
	{
		 mid=(last+first)/2;
		if(a[mid]==to_find)
		{
			cout<<"Element is present";
			break;
		}
		else if(a[mid]<to_find)
		{
			first=mid+1;
		}
		else
			last=mid-1;
	}

	if(mid==n or (mid!=n and a[mid]!=to_find))
	{
		cout<<"element not found";
	}
	
}
