#include <iostream>
using namespace std;

class n2;

class n1 {
private:
    int a;
public:
    friend void swap_data(n1 &obj1, n2 &obj2);

    void accept() {
        cout << "Enter first number (a): ";
        cin >> a;
    }
    void display() {
        cout << "n1.a = " << a << endl;
    }
}; 

class n2 {
private:
    int b;
public:
    friend void swap_data(n1 &obj1, n2 &obj2);

    void accept() {
        cout << "Enter second number (b): ";
        cin >> b;
    }
    void display() {
        cout << "n2.b = " << b << endl;
    }
};

// Friend function definition
void swap_data(n1 &obj1, n2 &obj2) {
    int temp = obj1.a;
    obj1.a = obj2.b;
    obj2.b = temp;
}

int main() {
    n1 s;
    n2 r;

    s.accept();
    r.accept();

    cout << "\n--- Before Swapping ---" << endl;
    s.display();
    r.display();

    swap_data(s, r);

    cout << "\n--- After Swapping ---" << endl;
    s.display();
    r.display();
    return 0;
}