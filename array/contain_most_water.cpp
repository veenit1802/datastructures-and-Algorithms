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

	int area=0;
	int left=0,right=n-1;

	while(left<right)
	{
		area=max(area,min(a[left],a[right])*(right-left));

		if(a[left]<a[right])
		{
			left++;
		}
		else
			right--;
	}

	cout<<area<<"\n";
}
