#include <iostream>

using namespace std;

int main()
{
   int n;
   cin>>n;
   int a[n];
   bool is=false;
   for(int i=0; i<n; i++){cin>>a[i];}
   if (n >= 2) {
        if (a[n-1] == 15) {
           cout<<"DOWN\n";
        } else if (a[n-1] == 0) {
            cout<<"UP\n";
        } else {
            if (a[n-1] > a[n-2]) {
              cout<<"UP\n";
            } else {
                cout<<"DOWN\n";
            }
        }
    } else if (n == 1) {
        if (a[n-1] == 15) {
            cout<<"DOWN\n";
        } else if (a[n-1] == 0) {
            cout<<"UP\n";
        } else {
            cout<<"-1";
        }
    }
    return 0;
}
