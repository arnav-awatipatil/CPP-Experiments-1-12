#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    float percentage;

public:
    Student(string studentName, float studentPercentage) {
        name = studentName;
        percentage = studentPercentage;
    }

    void displayData() const {
        cout << "\nStudent Name: " << name << endl;
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

int main() {
    string name;
    float percentage;
    cout << "Enter student name: ";
    getline(cin, name);

    cout << "Enter percentage: ";
    cin >> percentage;

    Student student1(name, percentage);
    student1.displayData();

    return 0;
}