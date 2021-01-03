#include<bits/stdc++.h>
using namespace std;

bool isSafe(int a[9][9],int posi,int posj,int val)
{
	int i;

	for(i=0;i<9;i++)
	{
		if(a[posi][i]==val and i!=posj)
		{
			return false;
		}
	}

	for(i=0;i<9;i++)
	{
		if(a[i][posj]==val and i!=posi)
		{
			return false;
		}
	}

	int j;
	i=(posi/3)*3;
	j=(posj/3)*3;
	posi=i+2;
	posj=j+2;

	for(;i<=posi;i++)
	{
		for(;j<=posj;j++)
		{
			if(a[i][j]==val)
			{
				return false;
			}
		}
	}

	return true;
}

bool SolveSudoku(int a[9][9],int n,int posi,int posj)
{
	if(posi==9)
	{
	
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			cout<<a[i][j]<<" "; 
			cout<<"\n";
		}
	
			return true;
	}

		/*for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			cout<<a[i][j]<<" ";
			cout<<"\n";
		}*/


	if(a[posi][posj]!=0)
	{
		if(posj+1==n)
		{
			posi+=1;
		}

		return SolveSudoku(a,n,posi,(posj+1)%n);
		
	}
	if(a[posi][posj]==0)
	{
		for(int i=1;i<=9;i++)
		{
		
			if(isSafe(a,posi,posj,i))
			{
				a[posi][posj]=i;	
	 			int k=posi;
				if(posj+1==n)
				{
					k+=1;
				}
			
				if(SolveSudoku(a,n,k,(posj+1)%n))
				{
					return true;
				}
			}
			a[posi][posj]=0;
	
		}
	}
	

	return false;
}


int main()
{
	int a[9][9],i,j,n=9;

	


	for(int i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
	

	SolveSudoku(a,n,0,0);
}
