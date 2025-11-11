#include <iostream>
using namespace std;
class person {
    protected:
    string name;
    int age;
};
class student : protected person {
    int roll_no;
    public:
    void accept() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
        cout << "Enter roll no: ";
        cin >> roll_no;
    }
    void display() {
        cout << "Name: " <<name<< endl; 
        cout << "Age: " <<age<< endl;   
        cout << "Roll No: " << roll_no << endl;
    }
};
int main() {
    student s;
    s.accept();
    s.display();
    return 0;
}