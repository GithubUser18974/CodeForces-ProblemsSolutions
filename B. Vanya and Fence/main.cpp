#include <iostream>
#include <vector>
using namespace std;

int main()
{
   int n , h;
   vector<int>v;
   cin>>n>>h;
   int sum=0;
   int tmp;
   for(int i=0; i<n; i++)
   {
       cin>>tmp;
       v.push_back(tmp);
       if(v[i]>h){sum +=2;}
       else {sum +=1;}
   }
   cout<<sum<<endl;
    return 0;
}
