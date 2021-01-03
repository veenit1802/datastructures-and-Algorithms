#include<bits/stdc++.h>
using namespace std;

// Question attend all the meetings
/*
 * simply sort all the pairs with their start time and simply check if we can attend all the meeting or not
 */

/*
bool cmp(const pair<int,int>&a,const pair<int,int>&b)
{
	return a.first<b.first;
}
*/
bool canAttendAllMeeting(vector<pair<int,int>>v)
{
	sort(v.begin(),v.end());


	int meet=v[0].second;

	for(int i=1;i<v.size();i++)
	{
		if(v[i].first<meet)
		{
			return false;
		}
		meet=v[i].second;
	}
	return true;
}

int main()
{
	int n,i,s,e;
	cin>>n;
	vector<pair<int,int>>v;

	for(i=0;i<n;i++)
	{
		cin>>s>>e;
		v.push_back({s,e});
	}

	cout<<canAttendAllMeeting(v);
}
