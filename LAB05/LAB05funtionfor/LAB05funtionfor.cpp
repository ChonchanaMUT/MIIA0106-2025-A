#include <iostream>
#include <string>
using namespace std;

int main()
{
	int num = 1;
	int min = 0;
	int counter = 0;

	for (counter = 0; num != 0; counter++)
	{
		cout << "Enter an integer Num : ";
		cin >> num;
	}

	cout << "You have entered " << counter - 1 << " integers" << endl;
	cout << "The minimum value is " << min << endl;

	return 0;
}