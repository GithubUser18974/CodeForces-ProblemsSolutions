#include <bits/stdc++.h>
#define ull unsigned long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ull n,mod=1000003;
    ull a[1001];
    a[0]=1,a[1]=1;
    for(int i=2;i<1001;i++)
    {
        a[i]=(a[i-1]*3)%mod;
    }
    cin>>n;
    cout<<a[n]%mod;




    return 0;
}
