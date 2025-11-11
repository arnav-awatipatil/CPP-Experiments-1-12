#include <iostream>
using namespace std;

class student {
    int roll_no;
    float per; 

public:
    void accept() {
        cout << "Enter roll no: " << endl;
        cin >> this->roll_no;
        cout << "Enter percentage: " << endl;
        cin >> this->per;
    }

    void display() {
        this->accept();
        cout << "Roll no of student: " << this->roll_no << endl;
        cout << "Percentage of student : " << this->per << endl;
    }
};

int main() {
    student s; 
    s.display();
    return 0;
}