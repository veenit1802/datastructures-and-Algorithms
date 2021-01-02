#include<bits/stdc++.h>
using namespace std;


int main()
{
	vector<string>v;

	string s;

	int n,i;
	cin>>n;

	for(i=0;i<n;i++)
	{
		cin>>s;
		v.push_back(s);
	}

	string w1,w2;

	cin>>w1>>w2;

	int cnt=INT_MAX,pos1=-1,pos2=-1;


	for(i=0;i<n;i++)
	{
		if(v[i]==w1)
		{
			pos1=i;
		}
		else if(v[i]==w2)
		{
			pos2=i;
		}

		if(pos1!=-1 and pos2!=-1)
		{
			cnt=min(cnt,abs(pos1-pos2));
		}
	}

	cout<<cnt<<"\n";
}
