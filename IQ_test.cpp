#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr [n];
	int tmp;
	for(int i=0; i<n; i++)
	{
		cin>>tmp;
	if(tmp%2==0 && tmp>1)
	{
		arr[i]=0;
	}
	else{
		arr[i]=1;
	}
	}
	tmp=count(arr,arr+n,0);
	if(tmp>1){
		tmp=distance(arr,find(arr,arr+n,1));
				cout<<tmp+1<<endl;
	}
	else
	{
		tmp=distance(arr,find(arr,arr+n,0));
				cout<<tmp+1<<endl;
	}
	return 0;
}
