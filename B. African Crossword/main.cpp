#include <iostream>
#include <vector>
using namespace std;
/*   j j j
  i  c b a    c___
  i  b c d    |
  i  c b c    |
              c___
              |
              |
*/
int main()
{
    int n,m;
    cin>>n>>m;
    vector<string>v;
    string tmp;
    for(int i=0; i<n; i++)
    {

        cin>>tmp;
        v.push_back(tmp);
    }
    for(int i=0 ; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            bool is=true;
            for(int y=0; y<n; y++){
            if(v[i][j]==v[y][j]  && y!=i)
            {
                is=false;
            }
            }
            for(int u=0; u<m; u++)
            {
                if(v[i][u]==v[i][j]  && u!=j)
                {
                    is=false;
                }
            }
             if(is)
        {
            cout<<v[i][j];
        }
        }

    }
    return 0;
}
