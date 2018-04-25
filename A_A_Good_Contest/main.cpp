#include <iostream>
#include <string>
using namespace std;

 int main() {
  int n;
string name;
int befor;
int after;
bool is=false;
cin>>n;
for(int i=0; i<n; i++)
{

cin>>name;
cin>>befor;
cin>>after;
if(befor >=2400  && after >befor)
{
	is=true;
}

}
if(is)
{

	cout<<"YES"<<endl;
}
else
{

cout<<"NO"<<endl;
}
  return 0;
}
