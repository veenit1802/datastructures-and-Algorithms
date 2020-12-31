#include<bits/stdc++.h>
using namespace std;


int main()
{
	char a[1000];
	cin.getline(a,1000);

	int n=strlen(a);
	int i=0;
	string s;
	while(i<n)
	{
		s+=a[i];
		if(a[i]==a[i+1])	
		{	
			while(i<n-1 and a[i]==a[i+1])
			{
				i++;
			}
			i+=1;
			if(i+1==n)
				break;
		}
		else
			i++;
	}
	cout<<s<<"\n";
}
