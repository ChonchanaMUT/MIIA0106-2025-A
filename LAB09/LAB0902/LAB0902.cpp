// TODO 1) เติม field และ method ใน class Student 
// TODO 2) รับข้อมูลนักศึกษา 5 คน 
// TODO 3) แสดงผลข้อมูลนักศึกษาทั้งหมด  
#include <iostream>
#include <string>
using namespace std;
class Student 
{
public:
    string id;
    string nickname;
    string lineId;
    string phone;

    void input() 
    {
        cout << "Enter ID: ";
        cin >> id;
        cout << "Enter Nickname: ";
        cin >> nickname;
        cout << "Enter Line ID: ";
        cin >> lineId;
        cout << "Enter Phone: ";
        cin >> phone;
    }

    void print() 
    {
        cout << "ID: " << id << endl;
        cout << "Nickname: " << nickname << endl;
        cout << "Line ID: " << lineId << endl;
        cout << "Phone: " << phone << endl;
    }
};
int main()
{
    const int SIZE = 5;
    Student students[SIZE];
    // INPUT
    for (int i = 0; i < SIZE; i++)
    {
        cout << "=== Input Student " << (i + 1) << " ===\n";
        // TODO: students[i].input();
        students[i].input();
        cout << endl;
    }

    // OUTPUT
    cout << "\n===== Student List =====\n";
    for (int i = 0; i < SIZE; i++)
    {
        // TODO: students[i].print();
        students[i].print();
        cout << "----------------------\n";
    }

    return 0;
}