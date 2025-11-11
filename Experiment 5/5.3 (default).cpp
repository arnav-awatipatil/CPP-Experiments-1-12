#include <iostream>
using namespace std;
class emp {
    int empid;
    string name;
    float salary;
    public:
    emp() {
        empid = 69;
        name = "BhiluDon";
        salary =0.001;
    }
    void display() {
        cout << "Employee ID: " << empid << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }
};
int main () {
    emp e1;
    e1.display();
    return 0;
}