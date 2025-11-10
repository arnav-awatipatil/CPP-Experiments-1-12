#include <iostream>
using namespace std;

class Student {
protected:
    int rollno;
public:
    void getNumber(int r) {
        rollno = r;
    }
    void putNumber() const {
        cout << "Roll Number: " << rollno << endl;
    }
    virtual ~Student() {} 
};

class Test : virtual public Student {
protected:
    float part1, part2;
public:
    void getMarks(float p1, float p2) {
        part1 = p1;
        part2 = p2;
    }
    void putMarks() const {
        cout << "Marks Obtained:" << endl;
        cout << "Part1 = " << part1 << endl;
        cout << "Part2 = " << part2 << endl;
    }
};

class Sports : virtual public Student {
protected:
    float score;
public:
    void getScore(float s) {
        score = s;
    }
    void putScore() const {
        cout << "Sports Score: " << score << endl;
    }
};

class Result : public Test, public Sports {
    float total;
public:
    void display() {
        total = part1 + part2 + score;
        putNumber();
        putMarks();
        putScore();
        cout << "Total Score: " << total << endl;
    }
};

int main() {
    Result student1;
    student1.getNumber(101);
    student1.getMarks(78.5, 85.0);
    student1.getScore(9.0);
    student1.display();
    return 0;
}