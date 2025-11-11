#include <iostream>
using namespace std;
class student {
    int per;
    string name;
    
    public:
    student() {
        per=90;
        name="Awati";
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
    student s1;
    s1.display();
    return 0;
}