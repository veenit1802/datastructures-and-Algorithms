#include<bits/stdc++.h>
using namespace std;


int main()
{
	int n,i;
	cin>>n;
	int a[n];

	for(i=0;i<n;i++)
		cin>>a[i];
	int element1=0,element2=0,cnt1=0,cnt2=0;


	element1=a[0];
	cnt1=1;

	for(i=1;i<n;i++)
	{
		if(a[i]==element1)
		{
			cnt1++;
		}
		else if(a[i]==element2)
		{
			cnt2++;
		}
		else if(cnt1==0)
		{
			cnt1=1;
			element1=a[i];
		}
		else if(cnt2==0)
		{
			element2=a[i];
			cnt2+=1;
		}
		else
		{
			cnt1-=1;
			cnt2-=1;
		}
	}
	cnt1=0;
	cnt2=0;
	for(i=0;i<n;i++)
	{
		if(a[i]==element1)
		{
			cnt1++;
		}
		else if(a[i]==element2)
		{
			cnt2++;
		}
	}

	if(cnt1>n/3 and cnt2>n/3)
	{
		cout<<element1<<" "<<element2<<"\n";
	}
	else if(cnt1>n/3 or cnt2>n/3)
	{
		if(cnt1>n/3)
		{
			cout<<element1<<"\n";
		}
		else
		{
			cout<<element2<<"\n";
		}
	}
	else
	{
		cout<<"no element greater then n/3\n";
	}
}
