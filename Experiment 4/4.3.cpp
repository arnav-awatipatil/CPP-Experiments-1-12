#include <iostream>
using namespace std;

class Result2;

class Result1 {
private:
    int m1;
public:
    void accept() {
        cout << "Enter marks for first subject: ";
        cin >> m1;
    }
    friend void avg(Result1 &s, Result2 &r);
};

class Result2 {
private:
    int m2;
public:
    void accept() {
        cout << "Enter marks for second subject: ";
        cin >> m2;
    }
    friend void avg(Result1 &s, Result2 &r);
};


void avg(Result1 &s, Result2 &r) {
    float average = (s.m1 + r.m2) / 2.0;
    cout << "\nAverage = " << average << endl;
}

int main() {
    Result1 s;
    Result2 r;
    s.accept();
    r.accept();
    avg(s, r);
    return 0;
}