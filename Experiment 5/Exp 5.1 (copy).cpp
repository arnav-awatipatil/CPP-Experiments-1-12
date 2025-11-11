#include <iostream>
using namespace std;
class add {
    int total=0,n,i;
    public:
    add(int num) {
        n = num;
    }
    add(add &obj) {
        n = obj.n;
    }
void Calculate() {
    total=0;
    for(i=1;i<=n;i++) {
        total=total+i;x
    }
    cout<<"Sum of 1 to n numbers is:"<<total <<endl;
}
};
int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    add s1(n); 
    add s2(s1);
    s2.Calculate();
    return 0;
}