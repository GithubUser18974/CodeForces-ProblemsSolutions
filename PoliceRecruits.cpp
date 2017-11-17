#include <iostream>
using namespace std;
int main()
{
  int n;
         int t,count=0,per=0;
         cin>>n;
         while(n--)
         {
                 cin>>t;
                 if(t==-1)
                 {
                     if(per>0)
                    per--;
                     else
                     count++;
                 }
                 else
                  per += t;
         }
         cout<<count<<endl;
         return 0;
  return 0;
}
