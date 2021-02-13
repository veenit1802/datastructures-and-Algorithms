#include<bits/stdc++.h>
using namespace std;

class GoldMine{
    private:
        int n,m;
        vector<vector<int>>v;
    public:
    GoldMine(int n,int m)
    {
        this->n=n;
        this->m=m;
        v.resize(n);
        for(int i=0;i<n;i++)
        {
            v[i].resize(m);
        }
    }

    void takeInput()
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>v[i][j];
            }
        }
    }

    int getN()
    {
        return n;
    }
    int getM()
    {
        return m;
    }

    int getPos(int posi,int posj)
    {
        return v[posi][posj];
    }
    
  


};

  int recursion(GoldMine mine,int posi,int posj,vector<vector<bool>>&v)
    {
        if(posi<0 or posj<0 or posi>=mine.getN() or posj>=mine.getM()   or v[posi][posj]==true or mine.getPos(posi,posj)==0)
        {
            return 0;
        }
        
        int num=mine.getPos(posi,posj);
        v[posi][posj]=true;

        num+=recursion(mine,posi+1,posj,v);
        num+=recursion(mine,posi-1,posj,v);
        num+=recursion(mine,posi,posj+1,v);
        num+=recursion(mine,posi,posj-1,v);

        return num;
    }


int main()
{
    int n,m;
    cin>>n>>m;
    GoldMine mine=GoldMine(n,m);
    mine.takeInput();
    int maxCoin=0;
    vector<vector<bool>>v(11,vector<bool>(11,false));
    for(int i=0;i<n;i++)
    {
        
        for(int j=0;j<m;j++)
        {
            if(v[i][j]==false and mine.getPos(i,j)!=0)
            maxCoin=max(maxCoin,recursion(mine,i,j,v));
        }
    }

    cout<<maxCoin;
}