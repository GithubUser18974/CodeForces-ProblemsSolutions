#include <iostream>

using namespace std;

int main()
{
    int n,m;
    int counter=0,mx=0;
    cin>>n>>m;
    for(int i=1; i<=m; i++)
    {

        while(i>1)
        {
            if(i%2)
        {
            counter++;
            i=i/2;
        }
        else{
            counter++;
            i=3*i+1;
        }
        }
        if(mx<counter)
        {
            mx=counter;
        }

    }
    return 0;
}
