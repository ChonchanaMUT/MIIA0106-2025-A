#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

void displayStudentInfo(string name, string id, double score, char grade)
{
    cout << "Student Name: " << name << "\n";
    cout << "Student ID  : " << id << "\n";
    cout << "Score       : " << fixed << setprecision(2) << score << "\n";
    cout << "Grade       : " << grade << "\n";
}
//ใช้ do while ในโปรแกรมที่ 3
void calculateGrade(double score, char& grade)
{
    if (score >= 90) grade = 'A';
    else if (score >= 80) grade = 'B';
    else if (score >= 70) grade = 'C';
    else if (score >= 60) grade = 'D';
    else grade = 'F';
}

int main()
{
    const int N = 3; // students
    const int M = 4; // subjects

    string name[N], id[N];
    double score[N][M];
    double total[N];
    char grade[N];

    int i = 0;

    while (i < N) {
        cout << "Enter student name: ";
        getline(cin >> ws, name[i]);
        cout << "Enter student ID: ";
        cin >> id[i];
        total[i] = 0.0;
        int j = 0;

        do 
        {
            cout << "Enter score for subject " << (j + 1) << ": ";
            cin >> score[i][j];
            total[i] += score[i][j];
            j++;

        } 

        while (j < M);
        calculateGrade(total[i], grade[i]); i++;
    }

    for (int i = 0; i < N; i++) {
        displayStudentInfo(name[i], id[i], total[i], grade[i]);

    }
    return 0;
}
