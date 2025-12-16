//คำสั่ง do while
#include <iostream>
#include<string>
using namespace std;
int main()
{
	int num = 0;
	int min = 0;
	int counter = 0;

	do {
		cout << "Enter an integer Num : ";
		cin >> num;

		//เรียก functuin หาค่าน้อยที่สุด ต้องเป็นแบบ ref

	} while (num != 0);

	cout << "You have entered " << counter - 1 << " integers" << endl;
	cout << "The minimum value is " << min << endl;


	return 0;
}