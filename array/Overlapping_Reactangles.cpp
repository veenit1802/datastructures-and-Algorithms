#include<bits/stdc++.h>
using namespace std;


int main()
{
	vector<int>rect1;
	vecotr<int>rerct2;


	int x,i;

	for(i=0;i<4;i++)
	{
		cin>>x;
		rect1.push_back(x);
	}

	for(i=0;i<4;i++)
	{
		cin>>x;
		rect2.push_back(x);
	}


	if(rect1[2]<=rect2[0] || rect1[1]<=rect2[3] || rect1[0]>=rect2[2] || rect1[3]<=rect2[1])
	{
		cout<<false;
		return 0;
	}

	cout<<true;


	return 0;
}
