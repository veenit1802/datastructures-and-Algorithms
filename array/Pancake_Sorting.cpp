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
	int j,k;
	for(j=n-1;j>=0;j--)
	{
		int maxnum=0,pos;
		for(i=0;i<=j;i++)
		{
			if(maxnum<a[i])
			{
				maxnum=a[i];
				pos=i;
			}
		}
		if(pos!=j)

		{	
			for(i=0;i<=pos/2;i++)
			{
				swap(a[i],a[pos-i]);
			}

			for(i=0;i<=j/2;i++)
			{
				swap(a[i],a[j-i]);
			}

		
		}
		int cnt=0;
		for(i=1;i<n;i++)
		{
			if(a[i]>=a[i-1])
			{
				cnt++;
			}
		}
		if(cnt==n-1)
		{
			break;
		}
	}

	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}


	return 0;
}
