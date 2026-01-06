#include <iostream>
#include <string>
using namespace std;

struct Phone {
    string mobile;
    string home;
};

struct Parent {
    string name;
    string relationship;
    Phone contact;
};

struct Student {
    string id;
    string nickname;
    string lineId;
    Phone myContact;
    Parent myParent;
};

void inputStudent(Student& s) {
    cout << "Enter Student ID: ";
    cin >> s.id;

    cout << "Enter Nickname: ";
    cin >> s.nickname;

    cout << "Enter Line ID: ";
    cin >> s.id;

    cout << "Enter Student Mobile Number: ";
    cin >> s.myContact.mobile;

    cout << "Enter Student Home Number: ";
    cin >> s.myContact.home;

    cout << "Enter Parent Name: ";
    cin >> s.myParent.name;

    cout << "Enter Relationship: ";
    cin >> s.myParent.relationship;

    cout << "Enter Parent Mobile Number: ";
    cin >> s.myParent.contact.mobile;

    cout << "Enter Parent Home Number: ";
    cin >> s.myParent.contact.home;
}

void displayStudent(const Student& s) {
    cout << "\n===== Student Information =====\n";
    cout << "ID: " << s.id << endl;
    cout << "Nickname: " << s.nickname << endl;
    cout << "Line ID: " << s.lineId << endl;

    cout << "\n--- Student Contact ---\n";
    cout << "Mobile: " << s.myContact.mobile << endl;
    cout << "Home: " << s.myContact.home << endl;

    cout << "\n--- Parent Information ---\n";
    cout << "Name: " << s.myParent.name << endl;
    cout << "Relationship: " << s.myParent.relationship << endl;

    cout << "\n--- Parent Contact ---\n";
    cout << "Mobile: " << s.myParent.contact.mobile << endl;
    cout << "Home: " << s.myParent.contact.home << endl;
}

int main() {
    Student st;

    inputStudent(st);
    displayStudent(st);

    return 0;
}
