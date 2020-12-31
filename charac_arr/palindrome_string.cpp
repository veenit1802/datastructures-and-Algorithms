#include<bits/stdc++.h>
using namespace std;


int main()
{
	char s[1000];
	cin.getline(s,1000);
	int n=strlen(s);
	int cnt=0;
	for(int i=0;i<n/2;i++)
	{
		if(s[i]==s[n-i-1])
		{
			cnt++;
		}
	}
	if(cnt==n/2)
		cout<<"Palindrome string";
	else
		cout<<"Not palindrome string";

	return 0;
}
