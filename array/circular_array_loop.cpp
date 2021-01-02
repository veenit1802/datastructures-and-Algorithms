#include<bits/stdc++.h>
using namespace std;

int next(vector<int>&v,int i)
{
	return (i+v[i]+v.size())%v.size();
}

bool CircularLoop(vector<int>&v)
{
	if(v.size()==0)
		return false;
	int slow,fast;
	for(int i=0;i<int(v.size());i++)
	{
		slow=i;
		fast=i;

		while(v[slow]*v[next(v,slow)]>0 and v[fast]*v[next(v,fast)]>0 and v[fast]*v[next(v,next(v,fast))])
		{
			slow=next(v,slow);
			fast=next(v,next(v,fast));

			if(slow==fast)
			{
				if(slow==next(v,slow))
				{
					break; 
				}
				return true;
			}
		}

		slow=i;
		int val=v[slow];
		while(val*v[slow]>0)
		{
			int ne=slow;
			slow=next(v,slow);
			v[ne]=0;
		}

	}

	return false;
}


int main()
{
	int n;
	cin>>n;
	vector<int>v;
	int x;

	for(int i=0;i<n;i++)
	{
		cin>>x;
		v.push_back(x);
	}

	cout<<CircularLoop(v)<<"\n";
	return 0;
}
