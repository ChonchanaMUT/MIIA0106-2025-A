// TODO 1) เติม field ใน struct Student ให้ครบ: id, nickname, lineId, phone
// TODO 2) เขียน swapStudent(Student&, Student&) (ห้ามใช้ swap library)
// TODO 3) เขียน sortByID(Student[], size) ให้เรียง id น้อย -> มาก
// TODO 4) รับข้อมูล 5 คน แล้วเรียง แล้วแสดงผล
#include <iostream>
#include <string>
using namespace std;

struct Student
{
    string id;
    string nickname;
    string lineId;
    string phone;
};

void swapStudent(Student& a, Student& b)
{
    Student temp = a;
    a = b;
    b = temp;
}

void sortByID(Student students[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (students[j].id > students[j + 1].id)
            {
                swapStudent(students[j], students[j + 1]);
            }
        }
    }
}

void printStudents(Student students[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "ID: " << students[i].id << endl;
        cout << "Nickname: " << students[i].nickname << endl;
        cout << "LineID: " << students[i].lineId << endl;
        cout << "Phone: " << students[i].phone << endl;
        cout << "--------------------\n";
    }
}

int main()
{
    const int SIZE = 5;
    Student students[SIZE];

    for (int i = 0; i < SIZE; i++)
    {
        cout << "=== Input Student " << i + 1 << " ===\n";
        cout << "Enter of Name" << ": ";
        cin >> students[i].nickname;
        cout << "Enter of ID" << ": ";
        cin >> students[i].id;
        cout << "Enter of Line ID" << ": ";
        cin >> students[i].lineId;
        cout << "Enter of Phone" << ": ";
        cin >> students[i].phone;
        cout << endl;
    }

    sortByID(students, SIZE);

    cout << "\n=== Student List (Sorted by ID) ===\n";
    printStudents(students, SIZE);

    return 0;
}