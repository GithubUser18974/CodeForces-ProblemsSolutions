#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
  int arr[2];
  int sum=0;
  cin>>arr[0];
  cin>>arr[1];


  int n=arr[0] , m=arr[1];
  string  a[n],b[m];
  for(int i=0;i<n; i++)
  {
    cin.ignore();
    cin>>a[i];
  }
  for(int i=0; i<m; i++)
  {
    cin.ignore();
    cin>>b[i];
  }
  for(int i=0; i<m; i++)
  {
    bool a7a=true;
   for(int j=0; j<n;j++ )
    {
      if(b[i]==a[j])
      {
        a7a=false;
      }

    }
    if(a7a==true)
    {
      sum++;
    }
  }

  if(sum<n){cout<<"YES";}
else
{
cout<<"NO";
}
  return 0;
}
