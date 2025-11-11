#include <iostream>
using namespace std;
class emp {
    int empid;
    string name;
    float salary;
    public:
    emp(int id, string n, float s) {
        empid = id;
        name = n;
        salary = s;
    }
    void display() {
        cout << "Employee ID: " << empid << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }
};
int main () {
    int id;
    string name;
    int sal;
    cout<<"Enter Name: ";
    cin>>name;
    cout<<"Enter Id: ";
    cin>>id;
    cout<<"Enter Salary: ";
    cin>>sal;
    emp e1(id, name, sal);
    e1.display();
    return 0;
}