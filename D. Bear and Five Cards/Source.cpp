#include <iostream>
#include <string>
using namespace std;
int main()
{
	int arr[5];
	int sum[5];
	
	for (int i = 0; i < 5; i++)
	{
		cin >> arr[i];
		if (i == 1)
		{
			for (int j = 4; j >= 0; j++)
			{
				int 
				if (arr[i] == arr[j])
				{

				}
			}
		}
	}
	


	system("pause");
	return 0;
}


/*int main()
{
	int sum = 0 , k=0;
	int answer = 0;
	char arr[100];
	char equ[50]; // store repeated value
	int e = 0;
	char temp[50]; //store the sum of repeated value
	int f=0;
	cin.get(arr, 100);
	int len = strlen(arr); // find the length of the array input
	for (int i = 0; i < len; i++)
	{
		if (isdigit(arr[i])) // if is number
		{
			sum = 0; 
			bool is = false;
			int equal = strlen(equ); // find the current length of the equ array
			bool eeee = false; // if this value is searched once
			for (int t = i; t < equal; t++)
			{
				if (arr[i] == equ[t])
				{
					cout << "repeate" << endl;
					eeee = true;
				}
			}
			if (eeee == true)
			{
				continue;
			}
			else
			{
				int cnt = 0;
				for (int j = i + 1; j < len; j++)
				{
					if (arr[j] == arr[i])
					{
						cnt++;
						if (cnt == 0)
						{
							sum += arr[j]+arr[j];
							is = true;
						}
						
						sum += arr[j];
						is = true;
						
					}
				}
				if (is == true)
				{
					equ[e] = arr[i];
					temp[f] = sum;
					f++;
					e++;
					
				}
				else
				{
					int y = static_cast<int>(arr[i]);
					answer += y;
				}
			}

		}
		else
		{
			continue;
			cout << "hello";
		}
	}
	int min = temp[0];
	int l = strlen(temp);
	for (int i = 0; i < l; i++)
	{
		if (temp[i] < min)
		{
			min = temp[i];
		}
	}
	int x = static_cast<int>(min);

	cout <<answer<<endl;
	system("pause");
	return 0;
}*/