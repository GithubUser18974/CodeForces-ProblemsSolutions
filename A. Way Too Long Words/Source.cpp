#include <iostream>
using namespace std;
int main()
{
	int t;
	cin >> t;
	const int size = 100;
	char arrr[size];
	for (int x = 0; x < t; x++)
	{
		
	cin.get(arrr, size-90);
	int len = strlen(arrr);
	if (len > 10)
	{
		cout << arrr[0] << len - 2 << arrr[len-1];
	}
	else
	{
		int n=0;
		while (n <len)
		{
			cout << arrr[n];
			n++;
			
		}
	}
	}
	system("pause");
	return 0;
}