#include<bits/stdc++.h>
using namespace std;

int max_size(vector<string>&v,int i,string s)
{
	if(i==int(v.size()))
	{
		if(s.length()>26)
		{
			return 0;
		}
		int fre[26]={0};
		for(i=0;i<(s.length());i++)
		{
			if(fre[s[i]-'a']>=1)
				return 0;
			fre[s[i]-'a']++;
		}

		return int(s.length());
	}
	int op1=0,op2=0;
	if( int(s.length()) + int(v[i].length()) <= 26)
	{
		 op1=max_size(v,i+1,s+v[i]);
	}

	op2=max_size(v,i+1,s);

	return max(op1,op2);
}

int main()
{
	int n,i;
	cin>>n;
	
	vector<string>v;
	string s;

	for(i=0;i<n;i++)
	{
		cin>>s;
		v.push_back(s);
	}

	cout<<max_size(v,0,"");
	return 0;
}
