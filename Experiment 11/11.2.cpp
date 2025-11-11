 #include <iostream>
#include <vector>
 using namespace std;

int main() { 
    vector<int> vec = {1, 2, 3, 4, 5};
    int scalar = 3;
    
    for (int& value : vec) {
        value = value * scalar;
    }
    
    for (int& value : vec) {
        cout << value << " ";
    }
    cout << endl;
    return 0;
}