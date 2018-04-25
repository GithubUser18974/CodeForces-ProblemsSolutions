#include <iostream>
using namespace std;
int main()
{
	char arr[1000];
	cin.get(arr, 1000);
	int len = strlen(arr);
	int counter = 1;

	if (len == 2)
	{
		counter = 0;
	}
	else{
		for (int i = 3; i < len - 1; i++)
		{
			if (arr[i] == ',' || arr[i] == ' ')
			{
				continue;
			}
			else //////////
			{

				bool is = true;
				for (int j = i - 1; j>0; j--)
				{
					if (arr[j] == arr[i])
					{
						is = false;
						break;
					}

				}
				if (is == true)
				{
					counter++;
				}

			}//////////////////////


			}

			
	}
	
	cout << counter << endl;

	return 0;

}