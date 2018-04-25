#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int s=0;
    int n; cin>>n;
    char arr[n];
    for(int i=1; i<=n; i++)
    {
        cin>>arr[i];
        if(i>1)
        {
            if(arr[i]==arr[i-1])
            s++;
        }

    }


cout<<s;
    return 0;
}
