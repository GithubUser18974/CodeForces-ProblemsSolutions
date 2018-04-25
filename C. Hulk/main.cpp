#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    string str1="I hate it";
    string str2="I love it";
    string str3="I hate that";
    string str4="I love that";
    if(n==1)
    {
        cout<<str1<<endl;
    }
    else if(n==2)
    {
        cout<<"I hate that I love it";
    }
    else if(n%2==0&&n!=2)
    {
        int c=0;
        while(c!=n-1)
        {
            cout<<str3<<" ";
            c++;
            if(c!=n-1)
            {
                cout<<str4<<" ";
                c++;
            }
        }
        cout<<str2;
    }
    else
    {
        int c=0;
        while(c!=n-1)
        {
            cout<<str3<<" ";
            c++;
            if(c!=n-1)
            {
                cout<<str4<<" ";
                c++;
            }
        }
        cout<<str1;
    }
    return 0;
}
