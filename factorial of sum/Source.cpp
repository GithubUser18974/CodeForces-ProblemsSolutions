#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
using namespace std;

int main() {
	char arr[100];
	cin.get(arr, 100);
	int len = strlen(arr);
	for (int i = 0; i<len; i++)
	{
		if (isdigit(arr[i]))
		{
			cout << arr[i];
		}
		else
		{
			cout << "\n";
		}
	}
	
	return 0;
}
