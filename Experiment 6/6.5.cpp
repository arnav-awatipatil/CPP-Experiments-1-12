#include <iostream>
#include <string>
using namespace std;

class teacher {
protected:
    string name;
    int age;
public:
    void accept() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }
    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class student : public teacher {
private:
    int roll;
    string sname;
public:
    void saccept() {
        cout << "Enter student name: ";
        cin >> sname;
        cout << "Enter roll number: ";
        cin >> roll;
    }
    void sdisplay() {
        cout << "Student Name: " << sname << endl;
        cout << "Roll Number: " << roll << endl;
    }
};

class marks {
protected:
    int m1, m2, m3;
public:
    void maccept() {
        cout << "Enter marks of 3 subjects: ";
        cin >> m1 >> m2 >> m3;
    }
    void mdisplay() {
        cout << "Marks in subject 1: " << m1 << endl;
        cout << "Marks in subject 2: " << m2 << endl;
        cout << "Marks in subject 3: " << m3 << endl;
    }
    int getTotal() { return m1 + m2 + m3; }
};

class academics : public marks {
private:
    int total;
public:
    void totalmarks() {
        total = getTotal();
        cout << "Total Marks: " << total << endl;
    }
};

int main() {
    teacher t;
    t.accept();
    t.display();

    student s;
    s.saccept();
    s.sdisplay();

    // use academics object to accept marks and show total
    academics ac;
    ac.maccept();
    ac.mdisplay();
    ac.totalmarks();

    return 0;
}