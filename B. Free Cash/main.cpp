#include <bits\stdc++.h>
#define uni unsigned int
using namespace std;
int main()
{

	uni x, max = 1;
	uni* save;
	cin >> x;
	save = new uni[x];
	for (long i = 0; i < x; i++)
		save[i] = 1;
	pair<int, int>* cash;
	cash = new pair < int , int > [x];
	for (long i = 0, j = 0; i < x; i++)
	{
		cin >> cash[i].first >> cash[i].second;
		while ( j < i)
		{
			if (cash[i].second == cash[j].second){
				if (cash[i].first == cash[j].first)
				{
					save[j]++;
					if (save[j]>max)
						max = save[j];
					break;
				}
			}
				j++;
		}
	}
	cout << max << endl;
	return 0;
}




/*#include <bits/stdc++.h>

using namespace std;
int main()
{



    int n;
    cin>>n;
pair <int , int> arr[n];
pair <int , int> r[n];
int mx[n];int x=0;
int u=0;
int counter=0;
for(int i=0; i<n; i++){
       cin>>arr[i].first>>arr[i].second;

}
for(int i=0; i<n; i++){
       cout<<arr[i].first<<arr[i].second;
       cout<<"\nopopoppopopo\n"<<endl;
       bool is=true;
       if(i>=1){
       for(int j=i; j>=0; j--){
       if(arr[i].first==arr[j].first &&arr[i].second==arr[j].second)
       {
           is=false;

           break;

       }
       if(is==true)
       {
           counter=0;
           for(int p=0; p<n; p++){

                if(arr[i].first==arr[j].first &&arr[i].second==arr[j].second)
                {
                    counter++;;
                }

           }
            mx[x]=counter;x++;

            r[u].first=arr[i].first;
           r[u].second=arr[i].second;
           u++;
       }

       }

        }
        else{
            mx[x]=counter;x++;

            r[u].first=arr[i].first;
           r[u].second=arr[i].second;
           u++;
        }

}
int h=mx[0];
int l=0;
for(int y=0; y<n-1;y++)
{
    if(mx[y]>h)
    {
        h=mx[y];
        l=y;
    }
}
cout<<l;
    return 0;
}
*/
