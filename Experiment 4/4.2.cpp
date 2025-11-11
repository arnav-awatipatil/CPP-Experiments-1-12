#include <iostream>
using namespace std;

class NumberSwap {
private:
    int a, b;
public:
    void accept() {
        cout << "Enter two numbers (a and b): ";
        cin >> a >> b;
    }
    void display() {
        cout << "a = " << a << ", b = " << b << endl;
    }
 
    friend void swap_inside(NumberSwap &s);
};


void swap_inside(NumberSwap &s) {
    int temp = s.a;
    s.a = s.b;
    s.b = temp;
}

int main() {
    NumberSwap s;
    s.accept();
    
    cout << "\n--- Before Swapping ---" << endl;
    s.display();

    swap_inside(s);

    cout << "\n--- After Swapping ---" << endl;
    s.display();
    return 0;
}