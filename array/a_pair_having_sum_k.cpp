#include<bits/stdc++.h>
using namespace std;


/*
 * this question can be solve in four ways 
 * first way is to run O(n^2) array and find two elements having the sum k
 * second way is to sort the array iterate over each number seach the remaining number using binary search which will result in O(nlogn)
 * third way is to store all the number number in  hashmap and iterate over the array once the check if sum-(a[i]) is present in the haspmap (don't forget to remove the current number before deleting it) time complexity will be O(n)
 * Fourth way will be to use the two pointer technique and find the pair having the sum k (sort the array or array should be sorted) the time complexity will be O(n)  
 */


// here we will implement 2 pointer technique

int main()
{
	int n,num;
	cin>>n;
	int a[n],i;
        for(i=0;i<n;i++)
	      cin>>a[i];
	cin>>num;
	int j;
	i=0;
	j=n-1;
	
	while(i<j)
	{
		if(a[i]+a[j]<num)
		{
			i++;
		}
		else if(a[i]+a[j]>num)
		{
			j--;
		}
		else
		{
			cout<<a[i]<<" "<<a[j]<<endl;
			break;
		}
	}	
	if(i>=j)
	{
		cout<<"no pair is present";
	}
}
