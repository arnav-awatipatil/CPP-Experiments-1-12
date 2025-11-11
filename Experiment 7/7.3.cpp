#include <iostream>
using namespace std;
class number {
    int a;
    public:
    void accept() {
        cout << "Enter an integer: ";
        cin >> a;
    }
    void display() {
        cout << "The integer is: " << a << endl;
    }
    void operator - () {
        a = -a;
    }
};
int main () {
    number n;
    n.accept();
    -n;
    n.display();
    return 0;
}