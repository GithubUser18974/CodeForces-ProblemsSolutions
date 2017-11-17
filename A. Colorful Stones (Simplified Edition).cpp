
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s, tmp;
    cin >> s >> tmp;
    int counter = 0;
    for (int i = 0; i < tmp.length(); ++i)
    {
        if (tmp[i] == s[counter])
        {
            counter += 1;
        }
    }
    cout <<++counter<< endl;
    return 0;
}
