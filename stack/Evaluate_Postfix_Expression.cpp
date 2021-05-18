#include<bits/stdc++.h>
using namespace std;

double evaluatePrefix(string expres)
{
    stack<double>Stack;

    for(int i=expres.length()-1;i>=0;i--)
    {
        if(isdigit(expres[i]))
        {
            Stack.push(expres[i]-'0');
        }
        else{
            double o1=Stack.top();
            Stack.pop();
            double o2=Stack.top();
            Stack.pop();
            switch(expres[i])
            {
                case '+':Stack.push(o1+o2);break;
                case '-':Stack.push(o1-o2);break;
                case '*':Stack.push(o1*o2);break;
                case '/':Stack.push(o1/o2);break;
            }
        }
    }

    return Stack.top();
}

int main()
{
    string expre="+9*26";
    cout<<evaluatePrefix(expre)<<endl;
}