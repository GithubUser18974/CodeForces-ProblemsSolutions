#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    getline(cin,str);
    int len=str.length();
    char arr[len];
int counter=0;
    for(int i=0; i<len; i++)
    {
        arr[i]=str[i];

    }
int k=len-1;
    for(int i=0; i<len; i++)
    {
        if(str[i]==arr[k])
        {
            counter++;
            k--;
        }
    }
      if(counter==len){  cout<<"Lovely string";}
      else{cout<<"Poor ACMers";}

    return 0;
}
