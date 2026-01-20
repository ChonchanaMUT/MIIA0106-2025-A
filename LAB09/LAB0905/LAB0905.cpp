// TODO 1) เติม field: id, nickname, height, weight 
// TODO 2) เขียน method input(), print(), calcBMI()

#include <iostream>
#include <string>
using namespace std;
class Student
{
public:
	string id;
	string nickname;
	double height;
	double weight;

	void input()
	{
		cout << "Enter ID: ";
		cin >> id;
		cout << "Enter Nickname: ";
		cin >> nickname;
		cout << "Enter Height (cm): ";
		cin >> height;
		cout << "Enter Weight (kg): ";
		cin >> weight;
	}

	void print()
	{
		cout << "ID\t\t Nickname\t Height(cm)\t Weight(kg)\tBMI     "<< endl;
		cout << id << "\t\t " << nickname << "\t\t " << height << "\t\t " << weight << "\t\t " << calcBMI() << "\n";
	}

	double calcBMI()
	{
		double h = height / 100.0; // แปลง cm → m
		return weight / (h * h);
	}
};

int main()
{
	Student s1;
	cout << "=== Input Student ===\n";
	s1.input();

	cout << "\n=== Student Info ===\n";
	s1.print();

	return 0;
}
