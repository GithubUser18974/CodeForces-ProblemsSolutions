#include <iostream>

using namespace std;

int main()
{
    long long n; int anton=0; int danic=0;
    cin>>n;
    char arr[100000];
    cin.ignore();
    cin.get(arr,n+1);
    for(int i=0; i<n; i++)
    {

        if(arr[i]=='A'){anton=anton+1;}
        if(arr[i]=='D'){danic=danic+1;}
    }
    if(anton==danic)
    {
cout<<"Friendship"<<endl;

    }
    if(anton<danic){
        cout<<"Danik"<<endl;
    }
    if(anton>danic){
                cout<<"Anton"<<endl;
    }
    return 0;
}
