#include <iostream>
#include <string>
using namespace std;

int main() {
    string studentID, studentName;
    int score;
    char grade;

    // รับข้อมูลนักศึกษา
    cout << "Student ID: ";
    getline(cin, studentID);
    cout << "Name: ";
    getline(cin, studentName);
    cout << "Scores (0-100): ";
    cin >> score;

    if (score < 0 || score > 100) {
        cout << "\nError: Scores must be between 0 and 100 only!" << endl;
        return 1; // ออกจากโปรแกรมทันที
    }

    // ตัดเกรด
    if (score >= 90 && score <= 100) {
        grade = 'A';
    }
    else if (score >= 80 && score <= 89) {
        grade = 'B';
    }
    else if (score >= 70 && score <= 79) {
        grade = 'C';
    }
    else if (score >= 60 && score <= 69) {
        grade = 'D';
    }
    else {
        grade = 'F';
    }

    // แสดงผลข้อมูล
    cout << "\n----Student Report----\n";
    cout << "Student ID: " << studentID << endl;
    cout << "Name: " << studentName << endl;
    cout << "Scores: " << score << endl;
    cout << "Grade: " << grade << endl;

    return 0;
}