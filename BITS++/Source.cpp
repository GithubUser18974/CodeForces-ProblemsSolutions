#include <iostream>
#include <string>
using namespace std;
int main()
{
	int t;
	cin >> t;
	string str;
	int x = 0; 
	for (int i = 0; i < t; i++)
	{
		cin >> str;
		if (str[1] == '+' &&str[0]=='+')
		{
			++x;
		}
		else if (str[1] == '+' && str[2] == '+')
		{
			x++;

		}
		else if (str[1] == '-'&&str[2] == '-')
		{
			x--;
		}
		else
		{
			--x;
		}
	}
	cout << x << endl;


	return 0;
}