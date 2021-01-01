#include<bits/stdc++.h>
using namespace std;

/*
 * this problem can be solved in three ways
 * first-> doing the linear search which will take O(n*m) time
 * second-> doing the binary search in each row which will take O(n*logmax(n,m))
 * third-> using the matrix arrangement in our favour which is sorted by row and sorted by column which will take(n+m)
 * fourth-> using hash table which will take o(log(n*m)) time
 *
 *
 * in this problem we are going to implement te third method  
 */

int main()
{
	int i,j,n,key;
	cin>>n>>key;
	int a[n][n];

	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}

	i=0;
	j=n-1;

	while(j>=0 and i<n)
	{
		if(a[i][j]>key)
		{
			j--;
		}
		else if(a[i][j]<key)
		{
			i++;
		}
		else if(a[i][j]==key)
		{
			cout<<"Found at the location "<<i+1<<" "<<j+1<<"\n";
			return 0;
		}
	}

	cout<<"Not found\n";
	return 0;
}
