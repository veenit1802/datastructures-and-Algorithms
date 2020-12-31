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

	//generate all the subarray and find the greatest amoung them
	/*int sum=INT_MIN,lolsum=0;
	for(i=0;i<n;i++)
	{
		lolsum=a[i];
		sum=max(lolsum,sum);
		for(j=i+1;j<n;j++)
		{
			lolsum+=a[j];
			sum=max(lolsum,sum);
		}
	}
	cout<<sum<<"\n";
	*/
	
	// it is faster then the previous one having O(n) complexity
	int max_so_far=0,curr_sum=0;

	for(i=0;i<n;i++)
	{
		curr_sum+=a[i];
		if(curr_sum>max_so_far)
		{
			max_so_far=curr_sum;
		}
		if(curr_sum<0)
		{
			curr_sum=0;
		}
	}

	cout<<max_so_far<<"\n";
}
