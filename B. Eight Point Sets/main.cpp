#include <iostream>

using namespace std;

int main()
{
    int a[8],b[8];
    for(int i=0; i<8; i++)
    {
        cin>>a[i]>>b[i];
    }
    int x=a[0],
        y=a[4],
        z=a[6];
        bool b1=false,b2=false,b3=false;
        int c=0;
        for(int i=1; i<7; i++)
        {
            if(a[0]==a[i])
            {
                c++;
            }
        }
        if(c>3)
        {
               cout<<"ugly";

    return 0;
        }
    if(a[0]==a[1]&&a[2]==a[0])
    {
       if(b[0]==x&&b[1]==y&&b[2]==z)
       {
           b1=true;
       }
    }
   if(a[3]==a[4])
    {
       if(b[3]==x&&b[4]==z)
       {
           b2=true;
       }
    }
    if(a[5]==a[6]&&a[5]==a[7])
    {
         if(b[5]==x&&b[6]==y&&b[7]==z)
       {
           b3=true;
       }

    }
    if(b1==true&&b2==true&&b3==true)
    {

        cout<< "respectable";
    }
    else{
        cout<<"ugly";
    }
    return 0;
}
