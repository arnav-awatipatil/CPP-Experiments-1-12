 #include <iostream>
 using namespace std; 

template <typename T>
class vector { 
    T a[100];
    int size;
public:
    vector(int s) : size(s) {}
    
    void set(int i, T val) {
        if (i >= 0 && i < size) {
            a[i] = val;
        } else {
            cout << "invalid index" << endl;
        }
    }
    
    T get(int i) {
        if (i >= 0 && i < size) {
            return a[i];
        }
        cout << "invalid index" << endl;
        return (T)0; 
    }
    
    void display() {
        for (int i = 0; i < size; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }
}; 

int main() { // Renamed main
    vector<int> v(5);
    for (int i = 0; i < 5; i++) {
        v.set(i, i * 10);
    }
    v.display();
    v.set(2, 99);
    cout << "After modification: " << endl;
    v.display();
    return 0;
}