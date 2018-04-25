#include <iostream>

using namespace std;

int main()
{
   int n , x,y,z , sum=0;;
   cin>>n;
   for(int i=0; i<n; i++)
   {
       cin>>x>>y>>z;
       if(x+y+z>1){++sum;}
       else{
        continue;
       }
   }
   cout<<sum;
    return 0;
}
