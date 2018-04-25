#include <iostream>
using namespace std;
int main()
{
	int s, n  , x  , y;  
	int counter = 0;
	cin >> s >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> x >> y;
		if (s>x)
		{
			s = s + y;
			counter++;
		}
		else
		{
			break;
			
			
		}
		
	}

	if (counter == n)
		cout << "YES" << endl;
	
	else
	
		cout << "NO" << endl;
	
	system("pause");
	return 0;
}