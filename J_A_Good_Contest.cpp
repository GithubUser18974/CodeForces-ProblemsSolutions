#include <iostream>
using namespace std;
struct info
{
  string name;
  int befor;
  int after;
};
 int main() {
  int n , sum=0;
  cin>>n;
  info arr;
  for(int i=0; i<n; i++)
  {
    cin>>arr.name;
    cin>>arr.befor;
    cin>>arr.after;
    if(arr.befor >= 2400 && arr.after > arr.befor )
    {
      sum++;
    }
  }
  if(sum>0)
  {
    cout<<"YES";
  }
  else
  {
    cout<<"NO";
  }
  return 0;
}
