#include <iostream>
#include <string>
#include <cstring>
using namespace std;

class staff {
public:
    string name;        
    string post; 

    void accept() {
        cout << "Enter name of employee: ";
        cin >> name;
        cout << "Enter the post: ";
        cin >> post;
    }

    void display() { 
        cout << "Member having post HOD: " << name << endl; 
    }
};

int main() {
    staff a[5]; 
    
    for (int i = 0; i < 5; i++) {
        a[i].accept();
    }

    for (int i = 0; i < 5; i++) {
        if (a[i].post == "HOD") { 
            a[i].display();
        }
    }

    return 0;
}