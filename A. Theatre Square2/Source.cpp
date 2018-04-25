#include <iostream>
using namespace std;
int main()
{
	int m, n, a;
	cin >> m >> n >> a;
	if (m%a == 0 && n%a == 0)
	{
		cout << (m / a) * (n / a);

	}
	else if (m%a > 0 && n%a == 0)
	{
		cout << ((m / a)+1) * (n / a);

	}
	else if (m%a == 0 && n%a > 0)
	{
		cout << (m / a)  * ((n / a)+1);
	}
	else
	{
		cout << ((m / a)+1)  * ((n / a) + 1);
	}
	
	return 0;
}