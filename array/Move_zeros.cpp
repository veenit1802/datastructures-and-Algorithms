#include<bits/stdc++.h>
using namespace std;

/*
 * this question can be done in multiple way
 * first -> sorting the array but the sequence will change
 * second -> using extra O(n) space 
 * third -> using cnt variable to count the occurence of the zero and printing the number if it is not zero and
 * print the all zero at th end
 * Fourth -> using two pointer approach then going to zero and moving the i pointer to next location and 
 * swap them and keep on doing it
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

	int j;
	i=0;
	j=0;
	while(i<n and j<n)
	{
		if(a[j]==0)
		{
			if(a[i]!=0)
			{
				swap(a[i],a[j]);
				i++;
				j++;
			}
			else
				i++;
		}
		else
		{
			i++;
			j++;
		}
	}

	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
