#include<bits/stdc++.h>
using namespace std;

/*
 * simply generate all the number by squaring it and storing it if the number is 1 then it is happy number if not check if it is already present or not is yes print false or store it in map keep on repeating it until answer is found
 */

int main()
{
	int n;
	cin>>n;

	unordered_map<int,bool>mp;
	while(1)
	{
		if(n==1)
		{
			cout<<true<<"\n";
			return 0;
		}
		if(mp.find(n)!=mp.end())
		{
			cout<<false;
			return 0;
		}
		mp[n]=true;
		int sum=0;
		while(n)
		{
			int k=n%10;
			sum+=k*k;
			n=n/10;

		}
		n=sum;
	}
	cout<<false<<"\n";
	return 0;
}

