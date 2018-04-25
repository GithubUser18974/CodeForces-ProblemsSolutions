#include <iostream>
#include <algorithm>
#include <set>
using namespace std;

int main()
{
    int n;
    cin>>n;
    set<int>s;
    set<int>::iterator itr;
    int tmp;
    for(int i=0 ;i<n; i++)
    {
    cin>>tmp;
    s.insert(tmp);

    }
    if(n==1 || s.size()==1)
    {
        cout<<"NO"<<endl;
    }
    else if(n==2)
    {
        itr=s.begin();
        cout<<*++itr<<endl;
    }
    else{
    itr=s.begin();
    itr++;
    cout<<*itr<<endl;
    }
    return 0;
}
