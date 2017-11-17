#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
  char x[200],y[200];
  vector<int>res;
  int n;
  cin>>n;
  for(int k=0 ; k<n; k++ ){
    cin.ignore();
    cin.get(x,200);
    cin.ignore();
    cin.get(y,200);
    reverse(x,x+strlen(x));
    reverse(y,y+strlen(y));
    int xlen=strlen(x);
    int ylen=strlen(y);
    int counter=0;
    int carry=0;
    int tmp;
    if(xlen>ylen){
        for(int i=xlen-1; i>=0; i--)
        {
            if(ylen>=counter)
            {
                counter++;
                tmp=(int)x[i]+(int)y[i]+carry;
                if(tmp>9)
                {
                   carry=1;
                   tmp=tmp%10;
                   res.push_back(tmp);
                }
                else{
                    tmp=(int)x[i]+(int)y[i]+carry;
                    carry=0;
                     tmp=tmp%10;
                   res.push_back(tmp);
                }


            }
            else{
                tmp=(int)x[i]+carry;
                 tmp=tmp%10;
                   res.push_back(tmp);
                   carry=0;
            }

        }
    }
    else{




    for(int i=ylen-1; i>=0; i--)
        {
            if(xlen>=counter)
            {
                counter++;
                tmp=(int)x[i]+(int)y[i]+carry;
                if(tmp>9)
                {
                   carry=1;
                   tmp=tmp%10;
                   res.push_back(tmp);
                }
                else{
                    tmp=(int)x[i]+(int)y[i]+carry;
                    carry=0;
                     tmp=tmp%10;
                   res.push_back(tmp);
                }


            }
            else{
                tmp=(int)x[i]+carry;
                 tmp=tmp%10;
                   res.push_back(tmp);
                   carry=0;
            }

        }



    }
    reverse(res.begin(),res.end());
    for(int i=0; i<(int)res.size(); i++ )
    {
        cout<<res[i];
    }
res.erase(res.begin(),res.end());
  }

    return 0;
}
