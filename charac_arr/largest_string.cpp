#include<bits/stdc++.h>
using namespace std;


int main()
{

	int t;
	cin>>t;
	cin.get();
	char a[1000];
	int length=0;
	int largest_len=0;
	char largest[1000];
	while(t--)
	{
		cin.getline(a,1000);
		length=strlen(a);
		if(length>largest_len)
		{
			largest_len=length;
			strcpy(largest,a);
		}
		
	}

	cout<<largest<<" "<<largest_len<<"\n";

	return 0;
}
