#include <iostream>
using namespace std;
int main ()
{
int a;
int b,c,d,e;
cin>>a;
a=a+1;
for (int i=0;i<a;i++)
{
b=a/1000; //first digit
c=a/100%10; //second
d=a/10%10;//third
e=a%10;   //forth
if ((b!=c && b!=d && b!=e)&&(c!=b && c!=d && c!=e)&&(d!=b && d!=c && d!=e)&&(e!=b && e!=c && e!=d)){break;}
else {a++;}
}
cout<<b<<c<<d<<e;
return 0;
}
