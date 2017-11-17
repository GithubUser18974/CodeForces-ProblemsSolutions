#include <bits/stdc++.h>
using namespace std;
stack<string>s;
int top=-1;
void pwd()
{
    int tmp=top;
    while(tmp!=0)
    {
    s.pop();
    }
    cout<<"/";
    cout<<endl;
}

int main()
{
    s.push("/");
    top++;
    string m;
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin.ignore();
        getline(cin,m);
        if(m[0]=='p' && m[1]=='w' && m[2]=='d')
        {
            pwd();
        }
        else if(m[0]=='c'  &&  m[1]=='d' && m[3]!='.'  && m[4]!='.')
        {


        }
    }

    return 0;
}
