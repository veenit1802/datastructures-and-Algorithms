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

	 cout<<"\n\nunsorted array\n";
	 for(i=0;i<n;i++)
	 {
		 cout<<a[i]<<" ";
	 }
	 cout<<"\n";

	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				swap(a[j],a[j+1]);
			}
		}
	}
	
	// improvised version of the bubblesort is simply count the number of swaps if there is no swaps means the array is already sorted 
	cout<<"Sorted array\n";


	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
