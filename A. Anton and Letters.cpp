#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main()
{
set<char>s;
string ch;
getline(cin,ch);
for(int i=0; i<ch.length(); i++){
    if(isalpha(ch[i]))
    {
        s.insert(ch[i]);
    }

}
cout<<s.size();
    return 0;
}
