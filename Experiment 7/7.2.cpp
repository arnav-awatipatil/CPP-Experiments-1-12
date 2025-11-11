#include <iostream>
using namespace std;
class xyz {
public:
float Calculate(float n1, float n2,float n3,float n4,float n5) {
    return n1+n2+n3+n4+n5;
}
int calculate(int num[10]) {
    int sum = 0;
    for(int i=0; i<10; i++) {
        sum=sum+num[i];
    }
    return sum;
}
};
int main() {
    xyz a1;
    cout << "Enter 5 float numbers: ";
    float n1, n2, n3, n4, n5;
    cin >> n1 >> n2 >> n3 >> n4 >> n5;
    cout << "Sum of float numbers: " << a1.Calculate(n1, n2, n3, n4, n5) << endl;
    cout << "Enter 10 integer numbers: ";
    int num[10];
    for(int i=0; i<10; i++) {
        cin >> num[i];
    }
    cout << "Sum of integer numbers: " << a1.calculate(num) << endl;
    return 0;
}