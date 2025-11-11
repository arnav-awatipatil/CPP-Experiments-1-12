#include <iostream>
using namespace std;

class n2_greatest;

class n1_greatest {
private:
    int a;
public:
    void accept() {
        cout << "Enter first number: ";
        cin >> a;
    }
    friend void greatest(n1_greatest &s, n2_greatest &r);
};

class n2_greatest {
private:
    int b;
public:
    void accept() {
        cout << "Enter second number: ";
        cin >> b;
    }
    friend void greatest(n1_greatest &s, n2_greatest &r);
};


void greatest(n1_greatest &s, n2_greatest &r) {
    if (s.a >= r.b) {
        cout << "Greater number is: " << s.a << endl;
    } else {
        cout << "Greater number is: "<< r.b << endl;
    }
}

int main() {
    n1_greatest s;
    n2_greatest r;
    s.accept();
    r.accept();
    greatest(s, r);
    return 0;
}