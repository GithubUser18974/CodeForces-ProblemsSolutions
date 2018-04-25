#include <iostream>

using namespace std;

int main()
{
   int n;
   cin>>n;
   int c,d;
   int summ=0;
   int temp=0;
   while(n--)
   {

       cin>>c>>d;
       temp=(temp-c)+d;
       if(temp>summ)
       {
           summ=temp;
       }
   }
   cout<<summ<<endl;
    return 0;
}
