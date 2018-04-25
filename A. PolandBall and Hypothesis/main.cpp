#include <iostream>

using namespace std;
int prime(int n)
{
    for(int i=2; i<n; i++)
    {

        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n;
    cin>>n;
if(n==2||n==1)
{
    cout<<"1";
}
else if(n==0){cout<<"2";}
   else if(prime(n))
   {
       cout<<"1";
   }
   else{
     cout<<"2";
   }
    return 0;
}
