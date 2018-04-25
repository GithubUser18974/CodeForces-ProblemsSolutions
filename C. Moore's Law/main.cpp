#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
   double ans;
   double t=1.000000011 ;
   double in;
   double in2;
   cin>>in>>in2;
   ans=in*pow(t,in2);
     std::cout << std::setprecision(30)<<ans;
    return 0;
}
