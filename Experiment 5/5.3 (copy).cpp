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
     emp(emp &e) {
        empid=e.empid;
        name=e.name;
        salary=e.salary;
    }
    void display() {
        cout << "Employee ID: " << empid << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }
};
int main () {
    int empid;
    string name;
    int sal;
    cout<<"Enter Name: ";
    cin>>name;
    cout<<"Enter Id: ";
    cin>>empid;
    cout<<"Enter Salary: ";
    cin>>sal;
    emp e1(empid, name, sal);
    emp e2(e1);
    e2.display();
    return 0;
}