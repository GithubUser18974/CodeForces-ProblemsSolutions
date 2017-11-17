#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main()
{

    int t;
    int h=0;
    int counter=0;
    char tmp[100];
    cin>>t;
    string s[t] ,st[t] ;
   
    for(int i=0; i<t; i++)
    {
        cin>>s[i];

    }
    for(int i=0; i<t; i++)
    {
        cin>>st[i];

    }
    
    for(int i=0; i<t; i++)

    {  
    	bool is=true;
        int len=sizeof(tmp);
        int l1=s[i].size(); , l2=st[i].size();
        for(int d=0; d<l1; d++){
        for(int j=0; j<l2; j++)
    {
        if(s[d]==st[j] )
        {
         for(int k=0; k<len; k++)
         {
             char y=s[d];
             if(tmp[k]==y)
             {
                 is=false;
             }
         }
         if(is==true)
         {
             tmp[h++]=s[d];
         }
         else{counter++;}
        }
    }
}
    cout<<counter+(sizeof(s)-sizeof(tmp));
    }


   return 0;
}
