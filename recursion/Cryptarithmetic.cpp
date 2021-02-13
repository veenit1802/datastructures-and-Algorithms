#include<bits/stdc++.h>
using namespace std;

int mp[26]={0};
string s1,s2,s3;
vector<bool>v(10,false);

void solve(string s,int pos)
{
   if(pos==int(s.length()))
   {
      int num1=0,num2=0,num3=0;

      for(int i=0;i<int(s1.length());i++)
      {
         num1=num1*10+(mp[s1[i]-'a']-1);
      }
        for(int i=0;i<int(s2.length());i++)
      {
         num2=num2*10+(mp[s2[i]-'a']-1);
      }
        for(int i=0;i<int(s3.length());i++)
      {
         num3=num3*10+(mp[s3[i]-'a']-1);
      }

      if(num1+num2==num3)
      {
            for(int i=0;i<26;i++)
            {
               if(mp[i]>0)
               {
                  cout<<char('a'+i)<<"-"<<mp[i]-1<<" ";
               }
            }
            cout<<"\n";
      }
      return ;
   }


   for(int i=0;i<10;i++)
   {
      if(!v[i])
      {
         v[i]=true;
            mp[s[pos]-'a']=i+1;
               solve(s,pos+1);
         v[i]=false;
      }
   }
}


int main()
{
   

   cin>>s1>>s2>>s3;

   string s;
   int a[26]={0};
   for(int i=0;i<int(s1.length());i++)
   {
      if(a[s1[i]-'a']==0)
      {
         s+=s1[i];
         a[s1[i]-'a']++;
      }
   }

   for(int i=0;i<int(s2.length());i++)
   {
      if(a[s2[i]-'a']==0)
      {
         s+=s2[i];
         a[s2[i]-'a']++;
      }
   }

   for(int i=0;i<int(s3.length());i++)
   {
      if(a[s3[i]-'a']==0)
      {
         s+=s3[i];
         a[s3[i]-'a']++;
      }
   }

   solve(s,0);
   return 0;
}