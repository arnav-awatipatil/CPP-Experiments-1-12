#include <iostream>
using namespace std;
class add {
    int total=0,n,i;
    public:
add(int num) {
    n=num;
}
void Calculate() {
    total=0;
    for(i=1;i<=n;i++) {
        total=total+i;
    }
    cout<<"Sum of first 5 numbers is:"<<total <<endl;
}
};
int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    add s1(n);
    s1.Calculate();
    return 0;
}