#include <iostream>
using namespace std;
class add {
    int total=0,n,i;
    public:
add() {
    n=5;
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
    add s1;
    s1.Calculate();
    return 0;
}