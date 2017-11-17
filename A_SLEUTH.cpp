#include <iostream>
#include <cstring>
#include <string>
using namespace std;
int main()
{
char s[100];
cin.get(s,100);
int l=strlen(s);
while(! isalpha(s[l]))
{
	--l;
}
if(s[l]=='A'||s[l]=='O'||s[l]=='E'||s[l]=='U'||s[l]=='Y'||s[l]=='a'||s[l]=='o'||s[l]=='e'||s[l]=='u'||s[l]=='y')
{

cout<<"YES"<<endl;


}
else
{
cout<<"NO"<<endl;
}





return 0;
}
