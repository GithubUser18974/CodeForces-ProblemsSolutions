#include <iostream>
#include <string>
#include <cstring>
#include <iomanip>
using namespace std;

int main()
{
    int k;
  char arr[101];
 char repeated[101];
 int r=0;
  int count=0;
  int t;
  cin>>t;
  for(int p=0; p<t; p++)
  {
     char temp;
      cin>>temp;
      arr[p]=tolower(temp);

  }
bool is=true;


for(int i=0; i<t; i++)
{
    if(isupper(arr[i]))
    {
        char c=tolower(arr[i]);
        arr[i]=c;

    }
    is=true;
    if(i>=1)
    {
        for(int w=i-1; w>=0; w--)
        {
         if(arr[i]==arr[w])
         {
             is=false;
         }
        }

    if(is==false)
    {
       continue;
    }
    else{
            repeated[r]=arr[i];
        r++;
        count++;
    }
    }


    else{
        repeated[r]=arr[i];
        r++;
        count++;
    }
}

if(count>=26 && t>=26){

        cout<<"YES"<<endl;
}
else{cout<<"NO"<<endl;}
    return 0;
}
