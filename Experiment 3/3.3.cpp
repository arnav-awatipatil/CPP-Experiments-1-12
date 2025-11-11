#include <iostream>
#include <string>
using namespace std;

class Student {
private:

    class StudentData {
    public:
        int roll_no;
        string name;
        int m1;
        int m2;
    };

    StudentData data;

public:
    void accept() {
        cout << "Enter roll no: ";
        cin >> data.roll_no;
        cout << "Enter name: ";
        cin >> data.name;
        cout << "Enter marks for m1: ";
        cin >> data.m1;
        cout << "Enter marks for m2: ";
        cin >> data.m2;
    }

    void display() {
        cout << "\n--- Student Details ---" << endl;
        cout << "Roll no: " << data.roll_no << endl;
        cout << "Name: " << data.name << endl;
        cout << "Marks (m1, m2): " << data.m1 << ", " << data.m2 << endl;
    }
};

int main() {
    Student s;
    s.accept();
    s.display();
    return 0;
}