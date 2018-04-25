#include <iostream>

using namespace std;

int main()
{
    int arr[4];
    int counter=0;
    for(int i=0; i<4; i++)
    {
        cin>>arr[i];
        if(i>0)
        {

            for(int j=i-1; j>=0; j--)
            {
                if(arr[i]==arr[j])
                {
                    counter++;
                    break;
                }
            }
        }

    }
    cout<<counter<<endl;
    return 0;
}
