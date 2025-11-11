#include <iostream>
using namespace std;
class student {
    int per;
    string name;
    
    public:
    student(int p,string n) {
        per=p;
        name=n;
    }
    student(student &s) {
        per=s.per;
        name=s.name;
    }
    void display()
    {
        cout<<"Name: "<<name <<endl;
        cout<<"Percentage: "<<per <<endl;
    }
};
int main () {
    int per;
    string name;
    cout<<"Enter Name: ";
    cin>>name;
    cout<<"Enter Percentage: ";
    cin>>per;
    student s1(per,name);
    student s2(s1);
    s2.display();
    return 0;
}