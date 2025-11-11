#include <iostream>
using namespace std;

class xyz {
public:
    int length, breadth, side, area;

    int calculateArea(int length, int breadth) {
        return length * breadth;
    }

    int calculateArea(int side) {
        return side * side;
    }
};

int main() {
    xyz a1;
    int length, breadth, side;
    cout << "Enter length and breadth of rectangle: ";
    cin >> length >> breadth;
    cout << "Enter side of square: ";
    cin >> side;
    cout << "Area of rectangle: " << a1.calculateArea(length, breadth) << endl;
    cout << "Area of square: " << a1.calculateArea(side) << endl;
    return 0;
}