#include <iostream>

using namespace std;

int main()
{
    int n ;
    int  counter_1=0, counter_even=0, counter_odd=0;
    cin>>n;
    int even , odd;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        if(arr[i]==1)
        {
            counter_1++;
            odd=i+1;
        }
        else if(arr[i]%2==0)
        {
            counter_even++;
            even=i+1;
        }
        else
        {
            counter_odd++;
            odd=i+1;
        }
    }
    if((counter_1+counter_odd)>counter_even)
    {
        cout<<even<<endl;
    }
    else{
         cout<<odd<<endl;
    }
    return 0;
}
