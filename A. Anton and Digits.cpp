#include <iostream>

using namespace std;

int main()
{
   int a,s,d,f;
   int sum=0;
   cin>>a>>s>>d>>f;
   while(a>0&&d>0&&f>0)
   {
      sum=sum+256;
      a--;
      d--;
      f--;
   }
   while(a>0&&s>0)
   {
      sum=sum+32;
      a--;
      s--;
   }
   cout<<sum<<endl;
    return 0;
}
