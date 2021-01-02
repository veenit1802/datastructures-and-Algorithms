#include<bits/stdc++.h>
using namespace std;

/*
 * Question Sunny Building
 */
/*
 * there is another approach but it will take O(n^2) time 
 * we have to compare all the previous height to current height
 */

/*
 * in the code we have implemented the O(n) approach to find the buildings will receive the sun light
 */

int main()
{
	int n;
	cin>>n;
	vector<int>v;
	int x;

	for(i=0;i<n;i++)
	{
		cin>>x;
		v.push_back(x);
	}
	
	int mxheight=0;

	int cnt=0;

	for(i=0;i<n;i++)
	{
		if(v[i]>=mxheight)
		{
			mxheight=v[i];
			cnt++;
		}
	}

	cout<<cnt<<"\n";
}
