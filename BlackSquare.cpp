#include <iostream>
using namespace std;
int main()
{
string s;
int x,y,z,v;
cin>>x>>y>>z>>v;
cin.ignore();
getline(cin,s);
int sum=0;
int len=s.length();

  for(int i=0; i<len; i++)
  {
    if(s[i]=='1'){sum +=x;}
    else if(s[i]=='2'){sum +=y;}
    else if(s[i]=='3'){sum +=z;}
    else if(s[i]=='4'){sum +=v;}
  }


cout<<sum;
  return 0;
}
