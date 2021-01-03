#include<bits/stdc++.h>
using namespace std;

// Form the Biggest Number

/*
 * In this question we have to sort the number in a way that will make the greatest number rather than sorting 
 * it by adding the integer will overflow the interger constraint we will use the string and add them in string
 * and check if condition is true return 1 else return 0 
 */

bool cmp(const int &a , const int  &b)
{
	string s1,s2;
	s1=to_string(a)+to_string(b);
	s2=to_string(b)+to_string(a);

	if(s1>s2)
	{
		return 1;
	}
	else
		return 0;
}

void getBiggestNumber(vector<int>&v)
{
	sort(v.begin(),v.end(),cmp);
}


int main()
{

	int n;
	cin>>n;
	vector<int>v;
	int i;

	for(i=0;i<n;i++)
	{
		int x;
		cin>>x;
		v.push_back(x);
	}

	getBiggestNumber(v);


	for(i=0;i<n;i++)
	{
		cout<<v[i];
	}
	cout<<"\n";
	return 0;
}
