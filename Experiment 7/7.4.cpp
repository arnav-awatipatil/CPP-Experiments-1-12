#include <iostream>
using namespace std;
class number {
    int n=10;
public:
    void display() {
        cout << "The number is: " << n << endl;
}
void operator++() {
    ++n;
}
void operator++(int) {
    n++;
}

};
int main(){
    number n1;
++n1;
    n1.display();
    n1++; 
    n1.display();
    return 0;
}